#include <iostream>
#include <tuple>
#include <string>
#include <stdexcept>

std::tuple<double ,char, std::string> get_student(int id) {
    if (id == 0) return std::make_tuple(3.8, 'A', "Lisa Simpson");
    if (id == 1) return std::make_tuple(2.9, 'C', "Milhouse van Houten");
    if (id == 2) return std::make_tuple(1.7, 'D', "Ralph Wiggum");
    throw std::invalid_argument("id");
}

int main() {
    auto student0 = get_student(0);
    std::cout << "ID: 0, "
              << "GPA: " << std::get<0>(student0) << ", "
              << "grade: " << std::get<1>(student0) << ", "
              << "name: " << std::get<2>(student0) << std::endl;

    double gpal;
    char gradel;
    std::string name1;
    std::tie(gpal, gradel, name1) = get_student(1);
    std::cout << "Id: 1, "
              << "GPA: " << gpa1 << ", "
              << "grade: " << gradel << ", "
              << "name: " << name1 << std::endl;



    std::cout << "Hello world" << std::endl;
    return 0;
}

