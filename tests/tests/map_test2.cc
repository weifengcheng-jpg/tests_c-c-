#include <iostream>
#include <map>

struct FatKey {
    int x;
    int data[1000];
};

struct LightKey {
    int x;
};

bool operator<(const FatKey& fk, const LightKey& lk) { return fk.x < lk.x; }
//bool operator<(const LightKey& lk, const FatKey& fk) { return lk.x < fk.x; }
//bool operator<(const FatKey& fk1, const LightKey& lk2) { return fk1.x < lk2.x; }

int main() {
    std::cout << "Hello world" << std::endl;

    std::map<int, char> example = { {1, 'a'}, {2, 'b'} };
    auto search = example.find(2);
    if (search != example.end()) {
        std::cout << "Found " << search->first << " " << search->second << "\n";
    } else {
        std::cout << "Not found\n";
    }

    return 0;
}

