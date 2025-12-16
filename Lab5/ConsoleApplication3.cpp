#include <iostream>
using namespace std;


void swapValue(int a, int b);


void swapReference(int& a, int& b);

int main() {
    int a = 10;
    int b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

  
    swapValue(a, b);
    cout << "After swap (Call by Value): a = " << a << ", b = " << b << endl;

    
    swapReference(a, b);
    cout << "After swap (Call by Reference): a = " << a << ", b = " << b << endl;

    return 0;
}


void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


void swapReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
