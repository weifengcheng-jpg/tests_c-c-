#include <iostream>
#include <stdarg.h>
#include <sstream>

std::stringstream m_ss;

void format(const char* fmt, ...) {
    va_list al;
    va_start(al, fmt);
    format(fmt, al);
    va_end(al);
}

void format(const char* fmt, va_list al) {
    char* buf = nullptr;
    int len = vasprintf(&buf, fmt, al);
    if(len != -1) {
        m_ss << std::string(buf, len);
        free(buf);
    }
}

int main() {
    std::cout << "Hello world" << std::endl;

    char* str1= "wei";
    //const char* str2 = "feng";
    //const char* str3 = "cheng";
    format(str1); 

    std::cout << m_ss.str() << std::endl;

    return 0;
}

