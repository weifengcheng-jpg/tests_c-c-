#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr = {1, 2, 3};
    for (size_t i = 0; i < arr.size(); ++i) {
        if (i) {
            std::cout << " ";
        }
        std::cout << arr[i];
    }
    std::cout << std::endl;

    try {
        arr.at(3) = 4;
    } catch (std::exception& e) {
        std::cout << "exception: " << e.what() << std::endl;
    }

    arr[3] = 4; //未定义行为, 可能会core


    std::cout << "Hello world" << std::endl;
    return 0;
}

