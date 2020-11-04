#include <iostream>
#include <sstream>
#include <stdarg.h>

std::stringstream m_ss;

void format1(const char* fmt, va_list al);

void format(const char* fmt, ...) {
    va_list al;
    va_start(al, fmt);
    format1(fmt, al);
    va_end(al);
}

void format1(const char* fmt, va_list al) {
    char* buf = nullptr;
    int len = vasprintf(&buf, fmt, al);
    if(len != -1) {
        m_ss << std::string(buf, len);
        free(buf);
    }
}

int main() {
    std::cout << "Hello world" << std::endl;

    int num = 100;
    char character = 'A';
    std::string str1 = "mystring";
    format("Test va_list_Fun num: %d character: %c str: %s", num, character, str1.c_str());

    std::cout << m_ss.str() << std::endl;

    return 0;
}

