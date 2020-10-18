#include <iostream>
#include <functional>

struct Foo {
    Foo(int num):num_(num) {}
    void print_add(int i) const { std::cout << num_ + i << std::endl; }
    int num_;
};

void print_num(int i) {
    std::cout << i << std::endl;
};

struct PrintNum {
    void operator()(int i) const {
        std::cout << i << std::endl;
    }
};

int main() {
    //存储自由函数
    std::function<void(int)> f_display = print_num;
    f_display(-9);

    //存储lambda
    std::function<void()> f_display_42 = []() { print_num(42); };
    f_display_42();

    //存储到 std::bind 调用的结果
    std::function<void()> f_display_3123377 = std::bind(print_num, 312337);
    f_display_3123377();

    //存储到成员函数的调用
    std::function<void(const Foo&, int)> f_add_display = &Foo::print_add;
    const Foo foo(314159);
    f_add_display(foo, 1);
    f_add_display(3141590, 1);

    std::cout << "Hello world" << std::endl;
    return 0;
}

