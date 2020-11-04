#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <string>
#include <unistd.h>
#include <string.h>

static int __lstat(const char* file, struct stat* st = nullptr) {
    struct stat lst;
    int ret = lstat(file, &lst);
    if (st) {
        *st = lst;
    }
    return ret;
}

static int __mkdir(const char* dirname) {
    if (access(dirname, F_OK) == 0) {
        return 0;
    }
    return mkdir(dirname, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
}

bool Mkdir(const std::string& dirname) {
    if (__lstat(dirname.c_str()) == 0) {
        return true;
    }
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
    return false;
}

int main() {
    
    Mkdir("/home/working/tests_c-c-/tests/build/weifc");

    std::cout << "Hello world" << std::endl;
    return 0;
}

