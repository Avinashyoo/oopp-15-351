#include <iostream>

using namespace std;

// Area of Circle
double area(double radius) {
    return 3.14159 * radius * radius;
}

// Area of Rectangle
double area(double length, double width) {
    return length * width;
}

// Area of Square
int area(int side) {
    return side * side;
}

// Area of Triangle
double area(double base, double height, bool triangle) {
    if (triangle) {
        return 0.5 * base * height;
    }
    return 0.0;
}

int main() {
    cout << "--- Division 4: Area Calculations Output ---" << endl;
    cout << "Area of Circle (radius = 3.0): " << area(3.0) << endl;
    cout << "Area of Rectangle (length = 5.0, width = 4.0): " << area(5.0, 4.0) << endl;
    cout << "Area of Square (side = 6): " << area(6) << endl;
    cout << "Area of Triangle (base = 10.0, height = 5.0): " << area(10.0, 5.0, true) << endl;

    return 0;
}