#include <iostream>
#include <vector>

template<class T>
void print(const std::vector<T>& vec) {
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        if (it != vec.begin()) {
            std::cout << " ";
        }
        std::cout << *it;
    }
    std::cout << std::endl;
}

template<class T>
void print_size(const std::vector<T>& vec) {
    std::cout << "size=" << vec.size() << " capacity=" << vec.capacity() << std::endl;
}

int main() {
    std::vector<int> int_vec;
    int_vec.resize(3);

    print_size(int_vec);
    int_vec.push_back(10);
    print_size(int_vec);
    print(int_vec);

    std::cout << "Hello world" << std::endl;
    return 0;
}

