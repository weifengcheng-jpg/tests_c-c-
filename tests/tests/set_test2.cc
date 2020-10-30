#include <iostream>
#include <set>

struct FatKey {
    int x;
    int data[1000];
};

struct LightKey {
    int x;
};

bool operator<(const FatKey& fk, const LightKey& lk) { return fk.x < lk.x; }

int main() {
    std::cout << "Hello world" << std::endl;

    std::set<int> example = {1, 2, 3, 4};
    auto search = example.find(2);
    if (search != example.end()) {
        std::cout << "Found " << (*search) << "\n";
    } else {
        std::cout << "Not found\n";
    }


    return 0;
}

