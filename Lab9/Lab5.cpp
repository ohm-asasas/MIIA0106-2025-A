// TODO 1) เติม field: id, nickname, height, weight 
// TODO 2) เขียน method input(), print(), calcBMI()

#include  <iostream>
#include  <string>
using namespace std;
class Student
{
public: // TODO
	string id;
	string nickname;
	float height; // in meters
	float weight; // in kilograms

	void input() {
		cout << " Enter id: ";
		cin >> id;

		cout << "Enter nickname: ";
		cin >> nickname;

		cout << " Enter height (in meters): ";
		cin >> height;

		cout << "Enter weight (in kilograms): ";
		cin >> weight;
	}

	void print() {
		cout << " id: " << id << endl;
		cout << " nickname: " << nickname << endl;
		cout << " height: " << height << " meters" << endl;
		cout << " weight: " << weight << " kilograms" << endl;
	}

	float calcBMI() {
		return weight / (height * height);
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	// TODO: s1.input();
	s1.input();
	cout << "\n=== Student Info ===\n";
	// TODO: s1.print();
	s1.print();
	cout << "BMI : " << s1.calcBMI() << endl;

	return 0;
}
