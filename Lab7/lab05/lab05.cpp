#include <iostream>
#include <string>

using namespace std;

double cricleArea(double x)
{
	double PI = 3.14159;
	double area = PI * x * x;
	return area;
}

double rectArea(double w, double h) 
{
	double rectarea = w * h;
	return w * h;
}

int main()
{
	// หาพื้นที่วงกลม //
	const double PI = 3.14159;
	double radius;
	double w, h;
	cout << "Enter radius:" << endl;
	cin >> radius;

	double area = cricleArea(radius);
	cout << "The area of the circle with radius:	" << area << endl;

	// หาพื้นที่สี่เหลี่ยม //
	cout << "Enter Width:" << endl;
	cin >> w;
	cout << "Enter Hight:" << endl;
	cin >> h;

	double rectarea = rectArea(w, h);
	cout << "The area of the rect:	"  << rectarea << endl;

	return 0;
}