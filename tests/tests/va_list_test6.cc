#include <iostream>
#include <string.h>
#include <stdarg.h>
#include <sstream>

std::stringstream m_ss;

void format(const char* fmt, va_list al); 

void format(const char* fmt, ...) {
    va_list al;
    va_start(al, fmt);
    format(fmt, al);
    va_end(al);
}

void format(const char* fmt, va_list al) {
    char* buf = nullptr;
    int len = vasprintf(&buf, fmt, al);
    if (len != -1) {
        m_ss << std::string(buf, len);
        free(buf);
    }
}

int main() {
    std::cout << "Hello world" << std::endl;

    int age = 19;
    char blood_type = 'A';
    std::string name = "weifengcheng";

    format("my name: %s, blood_type: %c, age: %d", name.c_str(), blood_type, age);

    std::cout << m_ss.str() << std::endl;

    return 0;
}

