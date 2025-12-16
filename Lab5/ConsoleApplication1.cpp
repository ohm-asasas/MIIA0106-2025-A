#include <iostream>
#include <cmath>
using namespace std;

// Function Prototypes
double circleArea(double radius);
double rectArea(double width, double height);

int main() {
    double r, w, h;

    // รับค่ารัศมีวงกลม
    cout << "Enter radius: ";
    cin >> r;

    // รับค่าความกว้างและความสูงของสี่เหลี่ยม
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;

    // แสดงผลลัพธ์
    cout << "Circle Area = " << circleArea(r) << endl;
    cout << "Rectangle Area = " << rectArea(w, h) << endl;

    return 0;
}

// ฟังก์ชันคำนวณพื้นที่วงกลม
double circleArea(double radius) {
    return 3.14159 * pow(radius, 2);
}

// ฟังก์ชันคำนวณพื้นที่สี่เหลี่ยมผืนผ้า
double rectArea(double width, double height) {
    return width * height;
}
