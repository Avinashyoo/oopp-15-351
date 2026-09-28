#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent a Student
struct Student {
    string name;
    string roll;
    string branch;
};

int main() {
    // Array to store details of 2 students
    Student students[2];

    cout << "Enter details for 2 students:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        
        cout << "Enter student name: ";
        // Using getline to handle spaces in names if needed
        cin >> ws; // Clear leading whitespace
        getline(cin, students[i].name);
        
        cout << "Enter roll number: ";
        cin >> students[i].roll;
        
        cout << "Enter branch: ";
        cin >> students[i].branch;
    }

    cout << "\n--- Student Details ---" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Student " << i + 1 << ": Name: " << students[i].name 
             << ", Roll No: " << students[i].roll 
             << ", Branch: " << students[i].branch << endl;
    }

    return 0;
}