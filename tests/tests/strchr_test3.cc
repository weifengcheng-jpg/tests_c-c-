#include <iostream>
#include <string.h>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>


static int __mkdir(const char* dirname) {
    if(access(dirname, F_OK) == 0) {
        return 0;
    }
    return mkdir(dirname, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
}

int main() {
    char* path = "/home/working/tests_c-c-/tests/build/weifc2\0";
    std::cout << path << std::endl;
    char* ptr = strchr(path + 1, '/');
    std::cout << path << std::endl;
    std::cout << ptr << std::endl;

    do {
        for (; ptr; *ptr = '/', ptr = strchr(ptr + 1, '/')) {
            std::cout << ptr << std::endl;
            *ptr = '\0';
            std::cout << ptr << std::endl;
            if (__mkdir(path) != 0) {
                break;
            }
        }
        if (ptr != nullptr) {
            break;
        } else if (__mkdir(path) != 0) {
            break;
        }
        free(path);
        return true;
    } while (0);
    free(path);

    std::cout << "Hello world" << std::endl;
    return 0;
}

