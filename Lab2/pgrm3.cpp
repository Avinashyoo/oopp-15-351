#include <iostream>

using namespace std;

// Function for Program 5: Updates salary using a reference variable (alias)
void updateSalaryByReference(double &newSalary) {
    newSalary += (newSalary * 0.10); // Updates salary by 10%
}

// Function for Program 6: Updates salary using a pointer variable (address)
void updateSalaryByPointer(double *newSalary) {
    *newSalary += (*newSalary * 0.10); // Dereferences and updates salary by 10%
}

int main() {
    // --- Program 5 Demonstration (Reference Function) ---
    double salary1 = 50000.0;
    
    // Call function passing salary1 (it acts as 'newSalary' reference inside)
    updateSalaryByReference(salary1);
    
    // Print the updated value from the old variable inside main
    cout << "Program 5 (Reference): Updated salary = " << salary1 << endl;


    // --- Program 6 Demonstration (Pointer Function) ---
    double salary2 = 60000.0;
    
    // Call function passing the address of salary2
    updateSalaryByPointer(&salary2);
    
    // Print the updated value from the old variable inside main
    cout << "Program 6 (Pointer):   Updated salary = " << salary2 << endl;

    return 0;
}