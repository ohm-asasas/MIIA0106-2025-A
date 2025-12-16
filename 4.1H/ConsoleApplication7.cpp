#include <iostream>
using namespace std;

int main() {
    char pos;

    while (true) {
        cout << "Enter sensor (L/R/C) or Q to quit: ";
        cin >> pos;

        if (pos == 'Q' || pos == 'q') break;

        if (pos == 'L' || pos == 'l') {
            cout << "Turn Left" << endl;
        }
        else if (pos == 'R' || pos == 'r') {
            cout << "Turn Right" << endl;
        }
        else if (pos == 'C' || pos == 'c') {
            cout << "Forward" << endl;
        }
        else {
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}
