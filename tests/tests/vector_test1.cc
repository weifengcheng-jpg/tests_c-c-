#include <iostream>
#include <vector>

int main() {
    std::vector<int> int_vecs = {2, 3, 4, 5};
    std::cout << int_vecs[3] << std::endl;
    int_vecs[3] = 6;
    std::cout << int_vecs[3] << std::endl;

    std::cout << int_vecs.at(2) << std::endl;
    int_vecs.at(2) = 8;
    std::cout << int_vecs.at(2) << std::endl;

    try {
        std::cout << int_vecs.at(4) << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    //遍历
    for (size_t i = 0; i < int_vecs.size(); ++i) {
        std::cout << int_vecs[i] << std::endl;
        std::cout << int_vecs.at(i) << std::endl;
    }

    std::cout << int_vecs[4] << std::endl; //程序崩溃
    


    std::cout << "Hello world" << std::endl;
    return 0;
}

