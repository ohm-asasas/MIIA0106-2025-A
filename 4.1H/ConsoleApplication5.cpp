#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int secret, guess;

    srand(time(0));              
    secret = rand() % 100 + 1;  

    do {
        cout << " number (1-100): ";
        cin >> guess;

        if (guess == secret) {
            cout << " Correct" << endl;
        }
        else {
            cout << " Wrong" << endl;
        }

    } while (guess != secret);

    return 0;
}