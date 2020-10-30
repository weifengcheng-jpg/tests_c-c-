#include <iostream>
#include <string>
#include <typeinfo>

int main() {
    std::string s;

    if (typeid(s) == typeid(std::string)) {
        std::cout << "same type" << std::endl;
    } else {
        std::cout << "different type" << std::endl;
    }
    std::cout << "Hello world" << std::endl;
    return 0;
}

