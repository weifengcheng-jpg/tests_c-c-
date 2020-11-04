#include <iostream>
#include <string>

int main() {
    std::string m_pattern = "weifengcheng";
    std::string nstr;
    nstr.append(1, m_pattern[0]);
    std::cout << nstr << std::endl;
    
    nstr.append(1, m_pattern[1]);
    std::cout << nstr << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}

