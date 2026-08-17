#include <iostream>
using namespace std;

inline int square(int n)
{
    return n * n;
}

int addition(int a, int b = 10)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    cout << square(5) << endl;

    cout << addition(20) << endl;
    cout << addition(20, 30) << endl;

    cout << multiply(4, 5) << endl;
    cout << multiply(2.5, 4.0) << endl;

    return 0;
}