// TODO 1) เติม field ใน class Student ให้ครบ: id, nickname, lineId, phone 
// TODO 2) เขียน method input() รับค่าจากผู้ใช้ 
// TODO 3) เขียน method print() แสดงข้อมูล
#include <iostream >
#include <string>
using namespace std;
class Student
{
public:
	// TODO 
	string id;
	string nickname;
	string lineID;
	string phone;

	void input() {
		cout << " Enter id: ";
		cin >> id;

		cout << "Enter nickname: ";
		cin >> nickname;

		cout << " Enter lineID :";
		cin >> lineID;

		cout << "Enter phone : ";
		cin >> phone;
	}
		void print() {
			cout << " id:" << id << endl;
			cout << " nickname :" << nickname << endl;
			cout << " lineID :" << lineID << endl;
			cout << "phone :" << phone << endl;
		
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: s1.input();
	s1.input();

	cout << "\n=== Output Student 1 ===\n";
	// TODO: s1.print();
	s1.print();

	return 0;
}
