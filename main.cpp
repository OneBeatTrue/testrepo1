#include <iostream>

struct Triangle {
    float x1, y1;
    float x2, y2;
    float x3, y3;
};

struct Circle {
    float x0, y0;
    float radius;
};

int main() {
    Triangle triangle = Triangle();
    triangle.x1 = 0.0;
    triangle.y1 = 1.0;

    triangle.x2 = 1.0;
    triangle.y2 = 0.0;

    triangle.x3 = 1.0;
    triangle.y3 = 1.0;


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
