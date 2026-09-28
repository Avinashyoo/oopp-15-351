#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    int hh;
    int mm;
    int ss;

public:
    void input(int h = 0, int m = 0, int s = 0);
    void show() const;
};

// Out-of-class function definitions
void Time::input(int h, int m, int s) {
    hh = h;
    mm = m;
    ss = s;
}

void Time::show() const {
    cout << setfill('0') 
         << setw(2) << hh << ":" 
         << setw(2) << mm << ":" 
         << setw(2) << ss << endl;
}

int main() {
    Time t1, t2;
    t1.input(12, 45, 30);
    t2.input(); // Uses default values (00:00:00)

    cout << "--- Division 2: Time Class Output ---" << endl;
    cout << "Time 1: ";
    t1.show();
    cout << "Time 2: ";
    t2.show();

    return 0;
}