#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>

int main(int argc, char** argv) {
    std::list<int> list_one;
    std::list<int>::iterator it;

    list_one.push_front(2);
    list_one.push_front(1); 

    for (it = list_one.begin(); it != list_one.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}


