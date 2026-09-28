#include <iostream>
#include <iomanip>

using namespace std;

// Class representing Time with hh, mm, and ss
class Time {
private:
    int hh;
    int mm;
    int ss;

public:
    // Input method that takes values as parameters and sets them to corresponding variables
    void input(int h, int m, int s) {
        hh = h;
        mm = m;
        ss = s;
    }

    // Show method that prints the value in hh:mm:ss format
    void show() const {
        // Using setfill and setw to ensure two-digit formatting (e.g., 09:05:02)
        cout << setfill('0') 
             << setw(2) << hh << ":" 
             << setw(2) << mm << ":" 
             << setw(2) << ss << endl;
    }
};

int main() {
    // Creating any two objects in main
    Time t1, t2;

    // Calling input method with parameters for the first object[cite: 4]
    t1.input(10, 30, 45);

    // Calling input method with parameters for the second object[cite: 4]
    t2.input(14, 5, 9);

    // Calling show method respectively[cite: 4]
    cout << "Time 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}