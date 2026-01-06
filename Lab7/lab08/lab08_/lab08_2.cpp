#include <iostream>
#include <string>
using namespace std;
struct Student {

	string id;
	string nickname;
	string lineid;
	string phone;

};

void printStudent(Student s) {
	cout << "ID" << s.id << endl;
	cout << "Nickname" << s.nickname << endl;
	cout << "Lineid" << s.lineid << endl;
	cout << "Phone" << s.phone << endl;

}


int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	cout << "ID :";
	cin >> s1.id;
	cout << "Nickname :";
	cin >> s1.nickname;
	cout << "Lineid :";
	cin >> s1.lineid;
	cout << "phone :";
	cin >> s1.phone;
	cout << "\n=== Output (from function) ===\n";
	printStudent(s1);
	return 0;
}