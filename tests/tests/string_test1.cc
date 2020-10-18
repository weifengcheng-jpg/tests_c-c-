#include <iostream>
#include <string>

int main() {
    std::string str = "wei";

    str.append(1, 'f');
    str.append(1, 'c');

    std::cout << "str.size(): " << str.size() << std::endl;

    std::cout << str << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

