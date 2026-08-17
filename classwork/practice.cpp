//define a class point with two private parameter show them by help of constructor 
#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point(int a, int b) {
        x = a;
        y = b;
    }
    void show() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    int a;
    int b;
    cin>> a >> b;
    int e,f;
    cin>> e >> f;
    Point c(a, b);
    c.show();
    Point d(e, f);
    d.show();
    return 0;
}