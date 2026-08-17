 #include<iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    // Point() : x(0), y(0) {
    //     cout << "Default constructor called." << endl;
    // }

    Point(int a = 0, int b = 0) : x(a), y(b) {
        cout << "Parameterized constructor called." << endl;
    }

    Point add(Point q) {
        Point r;
        r.x = x + q.x;
        r.y = y + q.y;
        return r;
    }

    void show() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point a(5, 10), b(20, 50);

    a.show();
    b.show();

    Point r = a.add(b);

    r.show();

    return 0;
}