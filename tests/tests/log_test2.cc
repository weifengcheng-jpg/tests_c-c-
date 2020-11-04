#include <iostream>
#include <string>

int main() {
    std::string m_pattern = "%d{%Y-%m-%d %H:%M:%S}%T%t%T%N%T%F%T[%p]%T[%c]%T%f:%l%T%m%n";
    std::string nstr;
    for (size_t i = 0; i < m_pattern.size(); ++i) {
        if (m_pattern[i] != '%') {
            nstr.append(1, m_pattern[i]);
                continue;
        }
        if((i + 1) < m_pattern.size()) {
            if(m_pattern[i + 1] == '%') {
                nstr.append(1, '%');
                continue;
            }
        }
    }

    std::cout << "nstr: " << nstr << std::endl;
    //d{Y-m-d H:M:S}TtTNTFT[p]T[c]Tf:lTmn
    //d{Y-m-d H:M:S}TtTNTFT[p]T[c]Tf:lTmn
    return 0;
}

