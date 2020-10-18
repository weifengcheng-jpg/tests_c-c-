#include <iostream>
#include <string>
#include <iomanip>
#include <map>

template<class Map>
void print_map(Map& m) {
    std::cout << '{';
    for (auto& p : m) {
        std::cout << p.first << ':' << p.second << ' ';
    }
    std::cout << "}" << std::endl;
}

struct Point {
    double x, y;
};

struct PointCmp {
    bool operator() (const Point& lhs, const Point& rhs) const {
        return lhs.x < rhs.x;
    }
};

int main() {
    // (1) 默认构造函数
    std::map<std::string, int> map1;
    map1["something"] = 69;
    map1["anything"] = 199;
    map1["that thing"] = 50;
    std::cout << "map1 = ";
    print_map(map1);

    // (2) 范围构造函数
    std::map<std::string, int> iter(map1.find("anything"), map1.end());
    std::cout << "\niter = "; print_map(iter);
    std::cout << "map1 = "; print_map(map1);

    // (3) 复制构造函数
    std::map<std::string, int> copied(map1);
    std::cout << "\ncopied = "; print_map(copied);
    std::cout << "map1 = "; print_map(map1);

    // (4) 移动构造函数
    std::map<std::string, int> moved(std::move(map1));
    std::cout << "\nmoved = "; print_map(moved);
    std::cout << "map1 = "; print_map(map1);

    // (5) initiializer_list 构造函数
    const std::map<std::string, int> init {
            {"this", 100},
            {"can", 100},
            {"be", 100},
            {"const", 100}, };
    std::cout << "\ninit = "; print_map(init);

    // 定制关键类选项 1 :
    // 使用比较 struct 
    std::map<Point, double, PointCmp> mag = {
        {{5, -12}, 13},
        {{3, 4}, 5},
        {{-8, -15}, 17}
    };

    for (auto p : mag) {
        std::cout << "The magnitude of (" << p.first.x
                  << ", " << p.first.y << ") is "
                  << p.second << "\n";
    }

    // 定制关键类选项2:
    // 使用比较 lambda
    // 此 lambda 按照其模取自局部变量 mag 
    auto cmpLambda = [&mag](const Point& lhs, const Point& rhs) { return mag[lhs] < mag[rhs]; };
    // 你亦可使用不依赖局部变量的 lambda , 像这样:
    //auto cmpLambda = [](const Point& lhs, const Point& rhs) { return lhs.y < rhs.y; };
    std::map<Point, double, decltype(cmpLambda)> magy(cmpLambda);

    // 各种插入元素的方式
    magy.insert(std::pair<Point, double>({5, -12}, 13));
    magy.insert({ {3, 4}, 5});
    magy.insert({Point{-8.0, -15.0}, 17});

    std::cout << std::endl;
    for (auto p : magy) {
        std::cout << "The magnitude of (" << p.first.x
                  << ", " << p.first.y << ") is "
                  << p.second << std::endl;
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}

