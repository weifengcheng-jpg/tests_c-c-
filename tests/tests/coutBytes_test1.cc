#include <iostream>

template<class T>
static uint32_t CreateBytes(T value) {
    uint32_t result = 0;
    for (; value; ++result) {
        value &= value - 1;
    }
    return result;
}

int main() {
    std::cout << CreateBytes<int>(4) << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

