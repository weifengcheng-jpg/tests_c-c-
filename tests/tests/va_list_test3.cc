#include <iostream>
#include <stdarg.h>

void log(int level, char* fmt, ...) {
    printf("[%d] ", level);

    va_list ap = NULL;
    va_start(ap, fmt);
    vprintf(fmt, ap);
    va_end(ap);
}

// debug 
void d(char* fmt, ...) {
    va_list ap = NULL;
    va_start(ap, fmt);
    log(0, fmt, ap);
    va_end(ap);
}

// info
void 

int main() {
    std::cout << "Hello world" << std::endl;
    return 0;
}

