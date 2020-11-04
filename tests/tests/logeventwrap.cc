#include <iostream>
#include <string>

#define SYLAR_LOG_LEVEL() \
    LogEventWrap().getString()

class LogEventWrap {
public:
    LogEventWrap() {}
    ~LogEventWrap() {}

    std::string getString() { return "GetString"; }
};

int main(int argc, char** argv) {
    std::cout << SYLAR_LOG_LEVEL() << std::endl;

    return 0;
}

