#include <iostream>

using namespace std;

// 1. Call by Value: Operates on a local copy. 
// Original variable remains unchanged.
void modifyByValue(int x) {
    x += 10;
    cout << "Inside modifyByValue (local copy): " << x << endl;
}

// 2. Call by Reference: Operates on an alias of the original variable. 
// Original variable is directly modified.
void modifyByReference(int &x) {
    x += 10;
    cout << "Inside modifyByReference (alias): " << x << endl;
}

// 3. Call by Address: Operates via a pointer holding the memory address. 
// Original variable is modified through dereferencing.
void modifyByAddress(int *xPtr) {
    *xPtr += 10;
    cout << "Inside modifyByAddress (dereferenced): " << *xPtr << endl;
}

int main() {
    int originalValue = 20;

    cout << "=========================================" << endl;
    cout << "Initial Value in main: " << originalValue << endl;
    cout << "=========================================\n" << endl;

    // --- 1. Call by Value ---
    cout << "1. Testing Call by Value:" << endl;
    modifyByValue(originalValue);
    cout << "Result in main -> Original Value: " << originalValue << " (Unchanged)\n" << endl;

    // --- 2. Call by Reference ---
    cout << "2. Testing Call by Reference:" << endl;
    modifyByReference(originalValue);
    cout << "Result in main -> Original Value: " << originalValue << " (Modified)\n" << endl;

    // Resetting value for demonstration
    originalValue = 20;

    // --- 3. Call by Address ---
    cout << "3. Testing Call by Address (Pointer):" << endl;
    modifyByAddress(&originalValue); // Passing memory address using '&'
    cout << "Result in main -> Original Value: " << originalValue << " (Modified)\n" << endl;

    return 0;
}