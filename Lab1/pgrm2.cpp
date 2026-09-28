#include <iostream>
#include <string>

using namespace std;

// Class definition representing the object-oriented approach
class Student {
private:
    string name;
    string roll;
    string branch;

public:
    // Member function to accept student details from the user
    void acceptDetails() {
        cout << "Enter student name: ";
        cin >> ws; // Clear leading whitespace buffer
        getline(cin, name);
        
        cout << "Enter roll number: ";
        cin >> roll;
        
        cout << "Enter branch: ";
        cin >> branch;
    }

    // Member function to display the student details
    void displayDetails() const {
        cout << "Name: " << name << ", Roll No: " << roll << ", Branch: " << branch << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Creating an array of Student objects dynamically or statically
    // For simplicity, we use an array of objects
    Student students[100]; 

    // Taking input for each student object
    cout << "\nEnter details for " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cout << "\n--- Student " << i + 1 << " ---" << endl;
        students[i].acceptDetails();
    }

    // Displaying records using object methods
    cout << "\n===============================" << endl;
    cout << "      STUDENT RECORD SYSTEM    " << endl;
    cout << "===============================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " -> ";
        students[i].displayDetails();
    }

    return 0;
}