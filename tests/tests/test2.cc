#include <iostream>

class Distance {
private:
    int feet;
    int inches;
public:
    Distance() {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    Distance operator()(int a, int b, int c) {
        Distance D;
        D.feet = a + c + 10;
        D.inches = b + c + 100;
        return D;
    }

    void displayDistance() {
        std::cout << "F: " << feet << " I:" << inches << std::endl;
    }
};

int main() {
    std::cout << "Hello world" << std::endl;

    Distance D1(11, 10), D2;

    std::cout << "First Distance: ";
    D1.displayDistance();

    D2 = D1(10, 10, 10);
    std::cout << "Second Distance: ";
    D2.displayDistance();

    return 0;
}

