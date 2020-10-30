#include <iostream>
#include <unordered_set>

struct Point {
    double x, y;
};

int main() {
    Point pts[3] = { {1, 0}, {2, 0}, {3, 0} };

    std::unordered_set<Point*> points = { pts, pts + 1, pts + 2 };

    for (auto iter = points.begin(); iter != points.end(); ++iter) {
        (*iter)->y = ((*iter)->x) * ((*iter)->x);
        std::cout << "(" << (*iter)->x << ", " << (*iter)->y << ") ";
    }
    std::cout << std::endl;

    for (Point* i : points) {
        i->y += 10;
        std::cout << "(" << i->x << ", " << i->y << ") ";
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}

