#include <iostream>
#include <string>

using namespace std;

int main()
{
	int loop = 0;

	for (int i = 1; i <= 100; i++) {
		loop += i;
	}
	
	cout << "Result: " << loop << endl;

	return 0;
}