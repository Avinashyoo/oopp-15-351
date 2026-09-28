#include <iostream>
using namespace std;

int main() {
    int count = 1;

start_loop: // Label definition
    if (count <= 3) {
        cout << "Count: " << count << endl;
        count++;
        goto start_loop; // Jumps back to the label
    }

    return 0;
}