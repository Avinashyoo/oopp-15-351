#include <iostream>
using namespace std;

int x = 100;  // Global variable

int main() {
    int x = 50;  // Local variable

    cout << x << endl;     // 50 → local x
    cout << ::x << endl;   // 100 → global x

    return 0;
}