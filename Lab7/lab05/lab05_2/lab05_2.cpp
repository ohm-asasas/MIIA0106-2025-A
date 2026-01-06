#include <iostream>
#include <string>

using namespace std;


void swapv(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// Call by Reference
void swapr(int& c, int& d) {
	int temp = c;
	c = d;
	d = temp;

}

int main() {

	cout << "---call by value---" << endl;
	int a, b, c, d;
	int num1, num2, num3, num4;
	cout << "Before swap:" << endl;

	cout << "Enter num1: " << endl;
	cin >> a;
	cout << "Enter num2: " << endl;
	cin >> b;
	cout << "a = " << a << ", b = " << b << endl;
	swapv (a, b); // ส่งค่าแบบ copy (Call by Value)
	cout << "After swap (in main):" << endl;
	cout << "a = " << a << ", b = " << b << endl;

	cout << "---call by reference---" << endl;
	cout << "Enter num3: " << endl;
	cin >> c;
	cout << "Enter num4: " << endl;
	cin >> d;
	cout << "Before swap:" << endl;
	cout << "c = " << c << ", d = " << d << endl;
	swapr (c, d); // เรียกแบบ reference
	cout << "After swap:" << endl;
	cout << "c = " << c << ", d = " << d << endl;

	return 0;
}