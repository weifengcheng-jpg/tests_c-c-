#include <iostream>
#include <string>
#include <string.h>

void print(std::string::size_type n, std::string const& s) {
    if (n == std::string::npos) {
        std::cout << "not found\n";
    } else {
        std::cout << "found: " << s.substr(n) << "at" << n << std::endl;
    }
}

int main() {
    std::string::size_type n;
    std::string const s = "This is a string";

    n = s.rfind("is");
    print(n, s);

    std::cout << "Hello world" << std::endl;
    return 0;
}

