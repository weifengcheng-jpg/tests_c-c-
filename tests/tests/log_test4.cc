#include <iostream>

template<class T, class X = void, int N = 0>
class Singleton {
public:
    static T* GetInstance() {
        static T v;
        return &v;
    }
};

class LoggerManager {
public:
    LoggerManager() {}

    int getRoot() const { return m_root; }
private:
    int m_root = 0;
};

typedef Singleton<LoggerManager> LoggerMgr;

#define SYLAR_LOG_ROOT() LoggerMgr::GetInstance()->getRoot()

int main(int argc, char** argv) {
    std::cout << SYLAR_LOG_ROOT() << std::endl;

    return 0;
}
