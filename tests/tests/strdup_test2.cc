#include <iostream>
#include <

int main() {
    const std::string& dirname = "/home/working/tests_c-c-/tests/build/weifc1";
    char* path = strdup(dirname.c_str());
    char* ptr = strchr(path + 1, '/');
    do {
        for (; ptr; *ptr = '/', ptr = strchr(ptr + 1, '/')) {
            *ptr = '\0';
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

