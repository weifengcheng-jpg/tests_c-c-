#include <iostream>

struct A {
    A(int) {  }
    A(int, int) {  }
    operator bool() const { return true; }
};

struct B {
    explicit B(int) {  }
    explicit B(int, int) {  }
    explicit operator bool() const { return true; }
};

int main() {
    A a1 = 1;
    A a2(2);
    A a3 {4, 5};
    A a4 = {4, 5};
    A a5 = (A)1;
    if (a1);
    bool na1 = a1;
    bool na2 = static_cast<bool>(a1);

    B b2(2);
    B b3 {4, 5};

    std::cout << "Hello world" << std::endl;
    return 0;
}

