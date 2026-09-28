#include <iostream>

using namespace std;

// 1. Call by Value: Operates on a local copy of the variable
void callByValue(int num) {
    num += 10;
    cout << "Inside callByValue function (local copy): " << num << endl;
}

// 2. Call by Reference: Operates directly on an alias of the original variable
void callByReference(int &num) {
    num += 10;
    cout << "Inside callByReference function (alias): " << num << endl;
}

// 3. Call by Address: Operates via a pointer pointing to the memory address
void callByAddress(int *numPtr) {
    *numPtr += 10;
    cout << "Inside callByAddress function (dereferenced): " << *numPtr << endl;
}

int main() {
    int originalVal = 20;

    cout << "=========================================" << endl;
    cout << "Initial Value in main: " << originalVal << endl;
    cout << "=========================================\n" << endl;

    // --- 1. Demonstration of Call by Value ---
    cout << "1. Testing Call by Value:" << endl;
    cout << "Before function call: " << originalVal << endl;
    callByValue(originalVal);
    cout << "After function call, originalVal = " << originalVal << " (Unchanged)\n" << endl;

    // --- 2. Demonstration of Call by Reference ---
    cout << "2. Testing Call by Reference:" << endl;
    cout << "Before function call: " << originalVal << endl;
    callByReference(originalVal);
    cout << "After function call, originalVal = " << originalVal << " (Modified)\n" << endl;

    // Resetting value for fair comparison
    originalVal = 20;

    // --- 3. Demonstration of Call by Address ---
    cout << "3. Testing Call by Address (Pointer):" << endl;
    cout << "Before function call: " << originalVal << endl;
    callByAddress(&originalVal); // Passing memory address using '&'
    cout << "After function call, originalVal = " << originalVal << " (Modified)" << endl;

    return 0;
}