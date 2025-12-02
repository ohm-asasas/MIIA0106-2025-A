#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout<<"Enter A: ";
    cin >> a;

    cout<< "Enter B: ";
    cin >> b;
     
    cout<< "A + B  = " << a + b << endl;
    cout<< "A - B  = " << a - b << endl;
    cout<< "A * B  = " << a * b << endl;
    cout<< "A / B  = " << a / b << endl;   // หารจำนวนเต็ม
    cout<< "A % B = " << a % b << endl;  // %% เพื่อพิมพ์เครื่องหมาย %

    return 0;
}
