#include <iostream>
#include <sys/stat.h>

int main(int argc, char* argv[]) {
    int i;
    struct stat buf;
    char* ptr;
    for (i = 1; i < argc; i++) {
        if (lstat(argv[i], &buf) < 0) {
            perror("Error\n");
            continue;
        }
        if ()
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}

