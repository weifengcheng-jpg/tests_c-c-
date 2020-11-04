#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "Test.b";
    {
        std::ofstream ostrm(filename, std::ios::binary);
        double d = 3.14;
        ostrm.write(reinterpret_cast<char*>(&d), sizeof d);
        ostrm << 123 << "abc" << '\n';
    }

    std::ifstream istrm(filename, std::ios::binary);
    double d;
    istrm.read(reinterpret_cast<char*>(&d), sizeof d);
    int n;
    std::string s;
    istrm >> n >> s;
    std::cout << " read back: " << d << " " << n << " " << s << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

