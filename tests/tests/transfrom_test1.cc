#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>

int main() {
    std::string s("hello");
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c)->unsigned char { return std::toupper(c); });
    std::cout << s << std::endl;

    std::vector<std::size_t> ordinals;
    std::transform(s.begin(), s.end(), std::back_inserter(ordinals),
                   [](unsigned char c)->std::size_t { return c; });
    for (auto ord : ordinals) {
        std::cout << ' ' << ord;
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}

