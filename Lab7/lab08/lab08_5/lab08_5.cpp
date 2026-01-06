#include <iostream>
#include <string>
using namespace std;
struct Student {
	string studentid;
	string nickname;
};
int main() {
	Student s1;
	Student* p = nullptr;
	// TODO 2) ใช้ pointer p ชี้ไปที่ s1
	p = &s1;
	// TODO 3) ก าหนดค่าโดยใช้ p->
	p->studentid = "6811130009";
	p->nickname = "Note";
	
	cout << "ID: " << p->studentid << endl;
	cout << "Nickname: " << p->nickname << endl;
	return 0;
}