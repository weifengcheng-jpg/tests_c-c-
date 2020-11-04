#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "./test.txt";
    double d = 3.14;
    std::ofstream(filename, std::ios::binary).wriite(reinterpret_cast<char*>(&d), sizeof d) << 123 << "abc";
    std::ifstream istrm(filename, std::ios::binary);
    if (!istrm.is_open()) {
        std::cout << "failed to open " << filename << std::endl;
    } else {
        double d;
        istrm.read(reinterpret_cast<char*>(&d), sizeof d);
        int n;
        std::string s;
        if (istrm >> n >> s) {
            std::cout << "read back from file: " << d << ' ' << n << ' ' << s << std::endl;
        }
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}

