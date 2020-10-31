#include <iostream>

template<class T>
class Singleton {
public:
    static T& get_instance() {
        static T instance;
        return instance;
    }
    virtual ~Singleton() {
        std::cout << "destructor called!" << std::endl;
    }
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
protected:
    Singleton() {
        std::cout << "constructor called!" << std::endl;
    }
};

class DerivedSingle : public Singleton<DerivedSingle> {
    friend class Singleton<DerivedSingle>;
public:
    DerivedSingle(const DerivedSingle&) = delete;
    DerivedSingle& operator=(const DerivedSingle&) = delete;
private:
    DerivedSingle()=default;
};

int main() {
    DerivedSingle& instance1 = DerivedSingle::get_instance();
    DerivedSingle& instance2 = DerivedSingle::get_instance();

    std::cout << "Hello world" << std::endl;
    return 0;
}

