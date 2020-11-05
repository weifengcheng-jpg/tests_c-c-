#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    std::ofstream outfile("./file_text/test1.txt");
    char ch;

    std::cout << "Type some text(type a dot to finish):\n";
    do {
        ch = std::cin.get();
        outfile.put(ch
    }


}


