#include <iostream>

int main() {
    
    int n = 0;
    int count = 0;
    while (n < 50) {
        count += 1;
        ++n;
    }
    std::cout << count << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

