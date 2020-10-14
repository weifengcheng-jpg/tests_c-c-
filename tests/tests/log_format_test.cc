#include <iostream>
#include <stdarg.h>
#include <sstream>
#include <memory>

std::stringstream m_ss;

/*
void format(const char* fmt, ...) {
    va_list al;
    va_start(al, fmt);
    format(fmt, al);
    va_end(al);
}
*/ 

void format(const char* fmt, va_list al) {
    char* buf = nullptr;
    int len = vasprintf(&buf, fmt, al);
    if(len != -1) {
        m_ss << std::string(buf, len);
        free(buf);
    }
}

int main() {
    const std::string& str1 = "weifc";
    
    format(str1);
    


    std::cout << "Hello world" << std::endl;
    return 0;
}

