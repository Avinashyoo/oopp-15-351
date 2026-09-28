 #include <iostream>

using namespace std;

class Point {
private:
    double x;
    double y;

public:
    void input(double px = 0.0, double py = 0.0);
    void show() const;
};

// Out-of-class inline function definitions
inline void Point::input(double px, double py) {
    x = px;
    y = py;
}

inline void Point::show() const {
    cout << "Point coordinates -> x: " << x << ", y: " << y << endl;
}

int main() {
    Point p1, p2;
    p1.input(4.5, 7.2);
    p2.input(); // Uses default values (0, 0)

    cout << "--- Division 1: Point Class Output ---" << endl;
    p1.show();
    p2.show();

    return 0;
}