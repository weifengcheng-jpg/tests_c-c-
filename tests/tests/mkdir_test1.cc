#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
    std::cout << (S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) << std::endl;

    std::cout << S_IRWXU << std::endl;

    std::cout << S_IRWXG << std::endl;

    std::cout << S_IROTH << std::endl;

    std::cout << S_IXOTH << std::endl;

    std::cout << 1 << std::endl;
    std::cout << (1 | 2) << std::endl;
    
    std::cout << "Hello world" << std::endl;
    return 0;
}

