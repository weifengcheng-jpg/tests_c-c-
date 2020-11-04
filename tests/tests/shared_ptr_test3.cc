#include <iostream>
#include <memory>

struct Foo {
    Foo(int n = 0) noexcept : bar(n) {

    }
}

int main() {
    std::cout << "Hello world" << std::endl;
    return 0;
}

