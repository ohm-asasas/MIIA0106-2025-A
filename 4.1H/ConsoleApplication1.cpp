#include <iostream>
using namespace std;

int main() {

    cout << "For loop: ";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    cout << "\nWhile loop: ";
    int j = 1;
    while (j <= 10) {
        cout << j << " ";
        j++;
    }

    cout << "\nDo-while loop: ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 10);

    return 0;
}
