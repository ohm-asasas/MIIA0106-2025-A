// lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string studenid, name, grade;
	float score{};


	cout << "Enter your Studen id: ";
	getline(cin, studenid);

	cout << "Enter your name: ";
	cin.ignore();
	getline(cin, name);

	cout << "Enter your Score: ";
	cin >> score;
	cout << endl;

	if (score >= 90 && score <= 100) {
		grade = "A";

	}else if (score >= 80 && score <= 90) {
		grade = "B";
	}
	else if (score >= 70 && score <= 80) {
		grade = "C";
	}
	else if (score >= 60 && score <= 70) {
		grade = "D";
	}
	else{
		grade = "F";
	}

	
	cout << "======= Student Report =======" << endl;

	cout << "Studen Id: " << studenid << endl;
	cout << "name : " << name << endl;
	cout << "Score: " << score << endl;
	cout << "Grade: " << grade << endl;
	cout << "================================" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
