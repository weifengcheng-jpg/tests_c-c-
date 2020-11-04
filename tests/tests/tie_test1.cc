#include <iostream>
#include <string>
#include <set>
#include <tuple>

struct S {
    int n;
    std::string s;
    float d;
    bool operator<(const S& rhs) const {
        return std::tie(n, s, d) < std::tie(rhs.n, rhs.s, rhs.d);
    }
};

int main() {
    std::cout << "Hello world" << std::endl;

    std::set<S> set_of_s;
    S value{42, "Test", 3.14};
    std::set<S>::iterator iter;
    bool inserted;

    std::tie(iter, inserted) = set_of_s.insert(value);

    if (inserted) {
        std::cout << "Value was inserted sucessFully" << std::endl;
    }

    return 0;
}

