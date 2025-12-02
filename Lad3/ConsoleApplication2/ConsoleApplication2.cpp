#include <iostream>
#include <string>
using namespace std;



int main() {

	string ID;
	string name;
	int score;
	

	cout << "Enter id: ";
	cin >> ID;
	cin.ignore();

	cout << "Enter name: ";
	getline(cin, name);

	cout << "Enter score: ";
	cin >> score;


	if (score <= 100 && score >= 90){
		cout << "Grabe : A";
	}
	else if(score <= 89 && score >= 80)
	{
		cout << "Grabe : B";

	}
	else if (score <= 79 && score >= 70)
	{
		cout << "Grabe : C";

	}
	else if (score <= 69 && score >= 60)
	{
		cout << "Grabe : D";

	}
	else if (score <= 59 && score >= 0)
	{
		cout << "Grabe : F";
		
	}
	else
	{
		cout << "ERROR";
	}



}