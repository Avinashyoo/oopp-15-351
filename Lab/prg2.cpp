#include <iostream>
using namespace std;

void callByValue(int x)
{
    x = x + 10;
    cout << x << endl;
}

void callByReference(int &x)
{
    x = x + 10;
    cout << x << endl;
}

void callByAddress(int *x)
{
    *x = *x + 10;
    cout << *x << endl;
}

int main()
{
    int a = 10;

    cout << "Original value: " << a << endl;

    callByValue(a);
    cout << "After call by value: " << a << endl;

    callByReference(a);
    cout << "After call by reference: " << a << endl;

    callByAddress(&a);
    cout << "After call by address: " << a << endl;

    return 0;
}