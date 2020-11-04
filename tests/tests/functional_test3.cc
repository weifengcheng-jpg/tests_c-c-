#include <iostream>
#include <functional>

struct functor {
public:
    int operator() (int a, int b) {
        return a + b;
    }
};

int main() {
    std::cout << "Hello world" << std::endl;
    functor ft;
    std::function<int(int, int)> func = ft();
    std::cout << func(1, 2) << std::endl;

    return 0;
}

