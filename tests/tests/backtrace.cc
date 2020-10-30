#include <iostream>
#include <execinfo.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BT_BUF_SIZE 100

void myfunc3() {
    int j, nptrs;
    void* buffer[BT_BUF_SIZE];
    char** strings;

    nptrs = backtrace(buffer, BT_BUF_SIZE);
    std::cout << "backtrace() returned " << nptrs << " addresses" << std::endl;

    strings = backtrace_symbols(buffer, nptrs);
    if (strings == NULL) {
        perror("backtrace_symbols");
        exit(EXIT_FAILURE);
    }

    for (j = 0; j < nptrs; j++) {
        std::cout << strings[j] << std::endl;
    }
    free(strings);
}

static void myfunc2() {
    myfunc3();
}

void myfunc(int ncalls) {
    if (ncalls > 1) {
        myfunc(ncalls - 1);
    } else {
        myfunc2();
    }
}


int main(int argc, char** argv) {
    std::cout << "Hello world" << std::endl;

    if (argc != 2) {
        fprintf(stderr, "%s num-calls\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    myfunc(atoi(argv[1]));
    exit(EXIT_SUCCESS);
}

