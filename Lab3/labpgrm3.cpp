#include <iostream>

using namespace std;

// ==========================================
// 1. INLINE FUNCTION
// ==========================================
// The 'inline' keyword requests the compiler to substitute the code 
// of the function at the point of each call, reducing function call overhead.
inline double square(double num) {
    return num * num;
}

// ==========================================
// 2. DEFAULT ARGUMENTS
// ==========================================
// If the second argument 'factor' is omitted during the call, 
// it automatically defaults to 1.5.
double scaleValue(double value, double factor = 1.5) {
    return value * factor;
}

// ==========================================
// 3. FUNCTION OVERLOADING
// ==========================================
// Multiple functions share the same name ('add') but differ in parameter types or count.

// Overload A: Takes two integers
int add(int a, int b) {
    cout << "[Calling int version] ";
    return a + b;
}

// Overload B: Takes two doubles
double add(double a, double b) {
    cout << "[Calling double version] ";
    return a + b;
}

// Overload C: Takes three doubles
double add(double a, double b, double c) {
    cout << "[Calling three-parameter version] ";
    return a + b + c;
}

int main() {
    // --- Demonstrating Inline Function ---
    cout << "--- 1. Inline Function ---" << endl;
    double number = 6.0;
    cout << "Square of " << number << " = " << square(number) << "\n\n";

    // --- Demonstrating Default Arguments ---
    cout << "--- 2. Default Arguments ---" << endl;
    double baseVal = 20.0;
    cout << "Using default factor (1.5): " << scaleValue(baseVal) << endl;
    cout << "Using custom factor (2.5):  " << scaleValue(baseVal, 2.5) << "\n\n";

    // --- Demonstrating Function Overloading ---
    cout << "--- 3. Function Overloading ---" << endl;
    cout << add(10, 15) << endl;                 // Matches int, int
    cout << add(4.5, 3.2) << endl;              // Matches double, double
    cout << add(1.1, 2.2, 3.3) << endl;         // Matches three parameters

    return 0;
}