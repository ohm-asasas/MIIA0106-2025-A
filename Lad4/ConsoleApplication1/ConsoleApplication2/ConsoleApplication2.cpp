#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; // ข้ามการทำงานในรอบที่ i เป็นเลขคู่
        }
        cout << "i: " << i << endl;
    }
    return 0;
}
