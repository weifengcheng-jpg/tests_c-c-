#include <iostream>
#include <sys/types.h>
#include <dirent.h>

int main() {
    DIR* dir;
    struct dirent* ptr;
    int i;
    dir = opendir("/etc/rc.d");
    while ((ptr = readdir(dir)) != NULL) {
        std::cout << "d_name :" << ptr->d_name << std::endl;
    }
    closedir(dir);

    std::cout << "Hello world" << std::endl;
    return 0;
}

