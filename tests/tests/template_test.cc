#include <iostream>

template<class T>
T Max(T t1, T t2) {
    return (t1 > t2) ? t1 : t2;
}

typedef const char* CCP;

template<>
CCP Max(CCP)(CCP s1, CCP s2) {
    return (strcmp)
}

int main() {
    std::cout << "Hello world" << std::endl;
    return 0;
}

