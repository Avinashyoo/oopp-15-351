#include <iostream>
using namespace std;

class student {
    int rollno;
    string name;
    float marks;

public:
    void input() {
        cin >> rollno;
        cin >> name;
        cin >> marks;
    }

    void display() {
        cout << rollno << endl;
        cout << name << endl;
        cout << marks << endl;
    }
};

int main() {
    student s;
    s.input();
    s.display();

    return 0;
}