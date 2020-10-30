#include <iostream>

#if defined __GNUC__ || defined __llvm__
/// LIKCLY 宏的封装, 告诉编译器优化, 条件大概率成功
#   define SYLAR_LIKELY(x) __builtin_expect(!!(x), 1)
/// LIKCLY 宏的封装, 告诉编译器优化, 条件大概率不成功
#   define SYLAR_UNLIKELY(x) __builtin_expect(!!(x), 0) 
#else
#   define SYLAR_LIKELY(x)      (x)
#   define SYLAR_UNLIKELY(x)    (x)
#endif

void test1() {
    std::cout << "__builtin_expect() " << std::endl;
}

void test2() {
    std::cout << "test2()" << std::endl;
}

void test3() {
    std::cout << "test3()" << std::endl;
}

int main(int argc, char** argv) {
    int x = 0;
    int* ptr = NULL;

    if (__builtin_expect(x, 0)) {
        test1();
    } else {
        std::cout << "No" << std::endl;
    }

    if (__builtin_expect(ptr != NULL, 1)) {
        test2();
    } else {
        test3();
    }

    int a;

    a = atoi(argv[1]);
    if (SYLAR_UNLIKELY(a == 2)) {
        a++;
    } else {
        a--;
    }
    std::cout << a << std::endl;


    std::cout << "Hello world" << std::endl;
    return 0;
}

