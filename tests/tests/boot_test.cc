#include <iostream>
#include "/usr/local/include/boost/thread.hpp"

void task1() {
    for (int i = 0; i < 10; i++) {
        std::cout << "This is task1: " << i << std::endl;
    }
}

void task2() {
    for (int i = 0; i < 10; i++) {
        std::cout << "this is task2: " << i << std::endl;
    }
}

int main() {
    std::cout << "Hello world" << std::endl;

    boost::thread thread_1 = boost::thread(task1);

    boost::thread thread_2 = boost::thread(task2);

    thread_2.join();
    thread_1.join();

    return 0;
}

