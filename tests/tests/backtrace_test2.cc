#include <iostream>
#include <execinfo.h>

void print_callstack() {
    int size = 32;
    int i;
    void* array[32];
    int stack_num = backtrace(array, size);
    char** stacktrace = NULL;

    printf("%s begin\n", __func__);
    stacktrace = (char**)backtrace_symbols(array, stack_num);

    for (i = 0; i < stack_num; i++) {
        printf("%s\n", stacktrace[i]);
    }
    free(stacktrace);
    printf("%s end\n", __func__);
}

int main() {

    print_callstack();

    std::cout << "Hello world" << std::endl;
    return 0;
}

