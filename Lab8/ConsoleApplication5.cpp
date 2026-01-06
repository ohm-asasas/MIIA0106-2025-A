#include <iostream>
using namespace std;

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
    Address addr;
    Phone tel;
};

int main() {
    Student s1;

    cout << "Enter Student Information:\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;

    cout << "Address - House Number: ";
    cin >> s1.addr.number;
    cout << "Address - Road: ";
    cin >> s1.addr.road;
    cout << "Address - District: ";
    cin >> s1.addr.district;
    cout << "Address - Province: ";
    cin >> s1.addr.province;

    cout << "Phone - Home: ";
    cin >> s1.tel.home;
    cout << "Phone - Mobile: ";
    cin >> s1.tel.mobile;

    cout << "\n===== Output =====\n";
    cout << "ID: " << s1.id << "\n";
    cout << "Name: " << s1.name << "\n";
    cout << "Surname: " << s1.surname << "\n";
    cout << "Number: " << s1.addr.number << "\n";
    cout << "Road: " << s1.addr.road << "\n";
    cout << "District: " << s1.addr.district << "\n";
    cout << "Province: " << s1.addr.province << "\n";
    cout << "Home Phone: " << s1.tel.home << "\n";
    cout << "Mobile Phone: " << s1.tel.mobile << "\n";

    return 0;
}
