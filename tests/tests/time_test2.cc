#include <iostream>
#include <time.h>

int main() {
    const std::string& format = "%Y-%m-%d %H:%M:%S";
    struct tm tm;
    time_t time = time(0);
    localtime_r(&time, &tm);
    char buf[64];
    strftime(buf, sizeof(buf), format.c_str(), &tm);

    std::cout << buf << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

