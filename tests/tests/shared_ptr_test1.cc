#include <iostream>
#include <memory>

class A {
public:
    int i;
    A(int n)
        :i(n){}
    ~A() { std::cout << i << " " << "destructed" << std::endl; }
};

int main() {
    std::shared_ptr<A> sp1(new A(2));

    std::cout << "Hello world" << std::endl;
    return 0;
}

