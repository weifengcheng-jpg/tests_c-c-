#include <iostream>

int main() {
    char* path = "wei/f/c";
    char* ptr = strdup(path + 1, '/');
    do {
        for (; ptr; *ptr = '/', ptr = strchr(ptr + 1, '/')) {
            *ptr = '\0';
            if (__mkdir(path) != 0) {
                break;
            }
        }
        if ()
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}

