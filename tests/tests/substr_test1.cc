#include <iostream>
#include <string>

int main() {
    std::cout << "Hello world" << std::endl;

    std::string a = "0123456789abcdefghij";
    
    std::string sub1 = a.substr(10);
    std::cout << "sub1: " << sub1 << std::endl;

    std::string sub2 = a.substr(5, 3);
    std::cout << "sub2: " << sub2 << std::endl;

    std::string sub3 = a.substr(1, 1);
    std::cout << "sub3: " << sub3 << std::endl;

    return 0;
}

