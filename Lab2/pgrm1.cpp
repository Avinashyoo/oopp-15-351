#include <iostream>

using namespace std;

int main() {
    // Create a variable as salary and assign some value
    double salary = 50000.0;

    // Create another reference variable as newSalary that stores the reference of salary
    double &newSalary = salary;

    // Update the salary by 10%
    newSalary += (newSalary * 0.10);

    // Show the value of salary from the old variable
    cout << "Updated Salary (from old variable 'salary'): " << salary << endl;

    return 0;
}