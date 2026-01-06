#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double total, double average, char grade)
{
    cout << "\n--- Student Summary ---" << "\n";
    cout << "Student Name: " << name << "\n";
    cout << "Student ID   : " << id << "\n";
    cout << "Total Score  : " << fixed << setprecision(2) << total << "\n";
    cout << "Average Score: " << fixed << setprecision(2) << average << "\n"; // แสดงค่าเฉลี่ย
    cout << "Grade        : " << grade << "\n";
}

void calculateGrade(double total, char& grade)
{
   
    double score = total / 4.0;

    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int N = 3;
    const int M = 4;

    string name[N], id[N];
    double score[N][M];
    double total[N];
    double average[N];
    char grade[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Enter Student " << i + 1 << " name: ";
        getline(cin >> ws, name[i]);
        cout << "Enter Student " << i + 1 << " id: ";
        cin >> id[i];

        total[i] = 0;
        for (int j = 0; j < M; j++)
        {
            cout << "Enter Subject " << j + 1 << " score: ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }

       
        average[i] = total[i] / M;

      
        calculateGrade(total[i], grade[i]);

      
        displayStudentInfo(name[i], id[i], total[i], average[i], grade[i]);

        cout << "------------------------------" << endl;
    }

    return 0;
}