#include <iostream>

using namespace std;

// Class representing a 2D Point
class Point {
private:
    double x;
    double y;

public:
    // Method to take values of x and y from the keyboard
    void input() {
        cout << "Enter value for x: ";
        cin >> x;
        cout << "Enter value for y: ";
        cin >> y;
    }

    // Method to print the values of x and y
    void show() const {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Creating two objects in main
    Point p1, p2;

    cout << "--- Enter details for First Point ---" << endl;
    p1.input(); // Calling input method for first object

    cout << "\n--- Enter details for Second Point ---" << endl;
    p2.input(); // Calling input method for second object[cite: 3]

    cout << "\n--- Displaying Results ---" << endl;
    cout << "p1 -> ";
    p1.show(); // Calling show method for first object[cite: 3]
    
    cout << "p2 -> ";
    p2.show(); // Calling show method for second object[cite: 3]

    return 0;
}