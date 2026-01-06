#include <iostream>
#include <string>

using namespace std;

struct Student
{
	string id;
	string nickname;
	string lineid;
	string phone;
};

int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	cout << "ID :" << endl;
	cin >> s1.id;
	cout << "Nickname :" << endl;
	cin >> s1.nickname;
	cout << "Lineid :" << endl;
	cin >> s1.lineid;
	cout << "phone :" << endl;
	cin >> s1.phone;
	cout << "\n=== Output Student 1 ===\n";
	cout << "ID :" << s1.id << endl;
	cout << "Nickname :" << s1.nickname << endl;
	cout << "lineid :" << s1.lineid << endl;
	cout << "phone :" << s1.phone << endl;
	return 0;
}