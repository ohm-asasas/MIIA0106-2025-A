#include <iostream>
#include <string>

using namespace std;

struct Phone
{
	string mobile;
	string home;
};

struct Parent
{
	string name;
	string relationship;
	Phone contact;
};

struct Student
{
	string id;
	string nickname;
	string lineid;
	Phone myContact;
	Parent myParent;
};

void inputStudent(Student& students)
{
	cout << "ID: ";
	cin >> students.id;
	cout << "Nickname: ";
	cin >> students.nickname;
	cout << "Lineid: ";
	cin >> students.lineid;
	cout << "Mobile Number: ";
	cin >> students.myContact.mobile;
	cout << "Home Number: " ;
	cin >> students.myContact.home;
	cout << "Parent Name: ";
	cin >> students.myParent.name;
	cout << "Relationship: ";
	cin >> students.myParent.relationship;
	cout << "Parent Mobile Number: ";
	cin >> students.myParent.contact.mobile;
	cout << "Parent Home Number: ";
	cin >> students.myParent.contact.home;
}

void outputStudent(const Student& students)
{
	cout << "ID: " << students.id << endl;
	cout << "Nicname: " << students.nickname << endl;
	cout << "Lineid: : " << students.lineid << endl;
	cout << "Mobile Number: " << students.myContact.mobile << endl;
	cout << "Home Number: " << students.myContact.home << endl;
	cout << "Parent Name: " << students.myParent.name << endl;
	cout << "Relationship: " << students.myParent.relationship << endl;
	cout << "Parent Mobile Number: " << students.myParent.contact.mobile << endl;
	cout << "Parent Home Number: " << students.myParent.contact.home << endl;
}

int main()
{
	Student s1;
	inputStudent(s1);
	cout << "---------------------" << endl;
	outputStudent(s1);
	return 0;
}