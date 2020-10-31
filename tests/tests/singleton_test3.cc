#include <iostream>

class Singleton {
public:
    ~Singleton() {
        std::cout << "destructor called!" << std::endl;
    }
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    static Singleton& get_instance() {
        static Singleton instance;
        return instance;
    }
private:
    Singleton() {
        std::cout << "constructor called!" << std::endl;
    }
};

int main() {
    Singleton& instance_1 = Singleton::get_instance();
    Singleton& instance_2 = Singleton::get_instance();
        

    std::cout << "Hello world" << std::endl;
    return 0;
}

