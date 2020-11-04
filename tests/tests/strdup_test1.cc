#include <iostream>
#include <string.h>

int main() {
    const std::string& name = "weifc";
    char* path = strdup(name.c_str());
    std::cout << path << std::endl;
    std::cout << path + 1 << std::endl;

    std::cout << "-------" << std::endl;
    
    char* path = "/home/working/tests_c-c-/tests/weifc2";
    char* path = strdup(path + 1)
    


    std::cout << "Hello world" << std::endl;
    return 0;
}

