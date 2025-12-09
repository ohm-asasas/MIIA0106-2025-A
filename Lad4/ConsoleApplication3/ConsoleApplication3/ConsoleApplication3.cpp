#include <iostream>
using namespace std;

int main() {

    int i = 0;

    cout << "for loop from 1 to 10" << endl;
    for (i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    cout << endl;

    cout << "while loop from 1 to 10" << endl;
    i = 1;
    while (i <= 10) {
        cout << i << endl;
        i++;
    }

    cout << endl;

    cout << "do while loop from 1 to 10" << endl;
    i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
