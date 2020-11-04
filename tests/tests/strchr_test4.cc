#include <iostream>
#include <string.h>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

static int __lstat(const char* file, struct stat* st = nullptr) {
    struct stat lst;
    int ret = lstat(file, &lst);
    if(st) {
        *st = lst;
    }
    return ret;
}

static int __mkdir(const char* dirname) {
    if(access(dirname, F_OK) == 0) {
        return 0;
    }
    return mkdir(dirname, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
}

bool Mkdir(const std::string& dirname) {
    if(__lstat(dirname.c_str()) == 0) {
        return true;
    }
    char* path = strdup(dirname.c_str());
    char* ptr = strchr(path + 1, '/');
    std::cout << __LINE__ << " : " << ptr << std::endl;
    do {
        for(; ptr; *ptr = '/', ptr = strchr(ptr + 1, '/')) {
            std::cout << __LINE__ << " : " << ptr << std::endl;
            *ptr = '\0';
            std::cout << __LINE__ << " : " << ptr << std::endl;
            if(__mkdir(path) != 0) {
                
            std::cout << __LINE__ << " : " << ptr << std::endl;
                break;
            }
        }
        if(ptr != nullptr) {
            std::cout << __LINE__ << " : " << ptr << std::endl;
            
            break;
        } else if(__mkdir(path) != 0) {
            std::cout << __LINE__ << " : " << ptr << std::endl;
            break;
        }
        free(path);
        return true;
    } while(0);
    free(path);
    return false;
}

int main() {
    
    Mkdir("/home/working/tests_c-c-/tests/build/weifc2");

    std::cout << "Hello world" << std::endl;
    return 0;
}

