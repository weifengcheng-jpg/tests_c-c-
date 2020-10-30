#include <iostream>
#include <exception>
#include <cxxabi.h>

struct empty {  };

template<class T, int N>
struct bar{  };

int main() {
    int status;
    char* realname;

    std::bad_exception e;
    realname = abi::__cxa_demangle(e.what(), 0, 0, &status);
    std::cout << e.what() << "\t> " << realname << "\t: " << status << std::endl;
    std::cout << e.what() << "\t=> " << realname << "\t: " << status << '\n';
    free(realname);



    std::cout << "Hello world" << std::endl;
    return 0;
}

