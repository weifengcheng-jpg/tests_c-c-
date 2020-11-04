#include <iostream>
#include <functional>

int f(int a, int b) {
    return a + b;
}

int main() {
    
    std::function<int(int, int)> func = f;
    std::cout << func(1, 2) << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

