#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 20; i++) {
        if (i % 2 == 0) {
            cout << "i: " << i << endl; // ข้ามการทำงานในรอบที่ i เป็นเลขคู่
        }
        
    }
    for (int i = 20; i >= 0 ; i--) {
        if (i % 2 == 0) {
            continue; // ข้ามการทำงานในรอบที่ i เป็นเลขคู่
        }
        cout << "i: " << i << endl;
    }

    return 0;
}
