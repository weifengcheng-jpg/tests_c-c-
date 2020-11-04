#include <iostream>
#include <vector> 

int main() {
    std::vector<std::string> name;

    name.push_back("wei");
    
    for (auto i : name) {
        std::cout << i;
    }
    std::cout << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

