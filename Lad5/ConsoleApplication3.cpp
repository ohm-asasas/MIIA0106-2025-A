#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double total, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << total << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double total, char& grade)
{
    if (total >= 90) grade = 'A';
    else if (total >= 80) grade = 'B';
    else if (total >= 70) grade = 'C';
    else if (total >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int N = 3; 
    const int M = 4; 

    string name[N], id[N];
    double score[N][M];
    double total[N]; 
    char grade[N]; 

    
    for (int i = 0; i < N; i++) {
        cout << " student " << i + 1 << " name: ";
        getline(cin >> ws, name[i]); 
        cout << " student " << i + 1 << " id: ";
        cin >> id[i];

       
        double sum = 0;
        for (int j = 0; j < M; j++) {
            cout << " student " << i + 1 << " score" << j + 1 << ": ";
            cin >> score[i][j];
            sum += score[i][j]; 
        }
        total[i] = sum; 
        calculateGrade(total[i], grade[i]); 
    }


    for (int i = 0; i < N; i++) {
        cout << "\nStudent " << i + 1 << " Information:\n";
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
    }

    return 0;
}
