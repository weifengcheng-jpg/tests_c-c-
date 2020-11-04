#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    const char* str = "Try not. Do, or do not. There is no Try.";
    char target = 'T';
    const char* result = str;

    while ((result = strchr(result, target)) != NULL) {
        printf("Found '%c' starting at '%s'\n", target, result);
        ++result;
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}

