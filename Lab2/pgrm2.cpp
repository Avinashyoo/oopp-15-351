#include <iostream>

using namespace std;

int main() {
    // 1. Create a variable as salary and assign some value into this
    double salary = 50000.0;

    // 2. Create a pointer to store the address of salary as newSalary
    double *newSalary = &salary;

    // 3. By newSalary, update the salary by 10%
    *newSalary += (*newSalary * 0.10);

    // 4. Show the value of salary from the old variable
    cout << "Updated Salary (from old variable 'salary'): " << salary << endl;

    return 0;
}