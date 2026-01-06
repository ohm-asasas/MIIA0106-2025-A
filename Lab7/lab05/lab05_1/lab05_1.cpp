#include <iostream>
#include <string>

using namespace std;

int maxofThree(int a, int b, int c)

{
	if (a >= b && a>= c)
	{
		return a;
	}
	else if (b>= a && b>= c) 
	{
		return b;
	}
	else
	{
		return c;
	}
}

int main()
{

	int num1, num2, num3;
	cout << "Enter num1: " << endl;
	cin >> num1;
	cout << "Enter num2: " << endl;
	cin >> num2;
	cout << "Enter num3: " << endl;
	cin >> num3;

	int max_value = maxofThree(num1, num2, num3);
	cout << "MaxValue: " << max_value << endl;

	return 0;
}