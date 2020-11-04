#include <iostream>

int main() {
    std::string a = "0123456789abcdefghij";
    std::cout << "a.size(): " << a.size() << std::endl;

    //count 为 npos, 返回[pos, size())
    std::string sub1 = a.substr(10);
    std::cout << "sub1: " << sub1 << std::endl;

    //pos 和 pos+count 都在边界内, 返回[pos, pos + count)
    std::string sub2 = a.substr(5, 3);
    std::cout << "sub2: " << sub2 << std::endl;

    std::string sub4 = a.substr(a.size() - 3, 50);
    std::cout << sub4 << std::endl;

    try {
        std::string sub5 = a.substr(a.size() + 3, 50);
        std::cout << sub5 << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "pos exceeds string size \n";
    }


    std::cout << "Hello world" << std::endl;
    return 0;
}

