#include <iostream>

using namespace std;

// 1. Inline Function for squaring a number
inline double computeSquare(double n) {
    return n * n;
}

// 2. Function with Default Arguments for scaling a value
double scaleNumber(double val, double multiplier = 2.0) {
    return val * multiplier;
}

// 3. Function Overloading for Arithmetic Operations
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "--- Division 3: Arithmetic Operations Output ---" << endl;
    cout << "Inline Square (5.0): " << computeSquare(5.0) << endl;
    cout << "Default Argument Scale (10.0): " << scaleNumber(10.0) << endl;
    cout << "Custom Argument Scale (10.0, 3.5): " << scaleNumber(10.0, 3.5) << endl;
    cout << "Overloaded Add (int, int -> 10 + 20): " << add(10, 20) << endl;
    cout << "Overloaded Add (double, double -> 5.5 + 4.2): " << add(5.5, 4.2) << endl;

    return 0;
}