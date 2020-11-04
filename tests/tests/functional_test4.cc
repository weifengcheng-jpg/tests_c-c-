#include <iostream>
#include <functional>

int main() {
    auto f = [](const int a, const int b) { return a + b; };
    std::function<int(int, int)> func = f;
    std::cout << func(1, 2) << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

