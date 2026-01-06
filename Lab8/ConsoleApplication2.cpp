#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string lineid;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
        cout << "Enter of id";
        cin >> students[i].id;

        cout << "Enter of Nickname";
        cin >> students[i].nickname;

        cout << "Enter of Lineid";
        cin >> students[i].lineid;

        cout << "Enter of Phone";
        cin >> students[i].phone;


    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...

         // TODO: cout << ...
    
        cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineid << "\t" << students[i].phone << "\n";
        cout << "----------------------\n";
    }

    return 0;
}
