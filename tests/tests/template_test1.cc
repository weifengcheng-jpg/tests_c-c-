#include <iostream>
#include <vector>

template<class T, class N>
class TestClass {
public:
    static bool comp(T num1, N num2) {
        std::cout << "standard class template" << std::endl;
        return (num1 < num2) ? true : false;
    }
};

template <class N>
class TestClass<int, N> {
public:
    static bool comp(int num1, N num2) {
        std::cout << "partitial setprecision" << std::endl;
        return (num1 < num2) ? true : false;
    }
};

int main() {
    std::cout << TestClass<char, char>::comp('0', 'l') << std::endl;

    std::cout << TestClass<int, char>::comp(30, 'l') << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

