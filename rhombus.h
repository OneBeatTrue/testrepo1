#include <cmath>


struct rhombus {
    double first_diagonal = 0;
    double second_diagonal = 0;
    double perimeter (){
        double side = pow((first_diagonal / 2) + (second_diagonal / 2), 0.5); // добавить quad
        return side * 4;
    }
    double area (){
        return first_diagonal * second_diagonal / 2;
    }
};