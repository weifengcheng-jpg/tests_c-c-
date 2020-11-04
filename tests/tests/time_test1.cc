#include <iostream>

int main() {
    struct tm tm;
    time_t time = 2;
    const std::string& m_format = "%Y-%m-%d %H:%M:%S";

    localtime_r(&time, &tm);
    char buf[64];
    strftime(buf, sizeof(buf), m_format.c_str(), &tm);

    std::cout << buf << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

