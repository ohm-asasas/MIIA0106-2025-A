#include <iostream>     // ใช้สำหรับ cout และ cin
#include <string>       // ใช้สำหรับตัวแปรชนิด string
using namespace std;    // ทำให้ไม่ต้องเขียน std:: ทุกครั้ง

// ===== โครงสร้างเก็บเบอร์โทรศัพท์ =====
struct Phone {
    string mobile;      // เบอร์มือถือ
    string home;        // เบอร์บ้าน
};

// ===== โครงสร้างเก็บข้อมูลผู้ปกครอง =====
struct Parent {
    string name;        // ชื่อผู้ปกครอง
    string relationship;// ความสัมพันธ์ เช่น Father, Mother
    Phone contact;      // เบอร์โทรผู้ปกครอง (ใช้ struct Phone)
};

// ===== โครงสร้างเก็บข้อมูลนักเรียน =====
struct Student {
    string id;          // รหัสนักศึกษา
    string nickname;    // ชื่อเล่น
    string lineId;      // Line ID
    Phone myContact;    // เบอร์โทรนักเรียน
    Parent myParent;    // ข้อมูลผู้ปกครอง
};

// ===== ฟังก์ชันรับข้อมูลนักเรียน =====
void inputStudent(Student& s) {
    cout << "Student ID: ";
    cin >> s.id;                    // รับรหัสนักศึกษา

    cout << "Nickname: ";
    cin >> s.nickname;              // รับชื่อเล่น

    cout << "Line ID: ";
    cin >> s.lineId;                // รับ Line ID

    cout << "Student Mobile: ";
    cin >> s.myContact.mobile;      // รับเบอร์มือถือของนักเรียน

    cout << "Student Home: ";
    cin >> s.myContact.home;        // รับเบอร์บ้านของนักเรียน

    cout << "Parent Name: ";
    cin >> s.myParent.name;         // รับชื่อผู้ปกครอง

    cout << "Relationship: ";
    cin >> s.myParent.relationship; // รับความสัมพันธ์

    cout << "Parent Mobile: ";
    cin >> s.myParent.contact.mobile; // รับเบอร์มือถือผู้ปกครอง

    cout << "Parent Home: ";
    cin >> s.myParent.contact.home;   // รับเบอร์บ้านผู้ปกครอง
}

// ===== ฟังก์ชันแสดงข้อมูลนักเรียน =====
void showStudent(Student s) {
    cout << "\n--- Student Data ---\n";
    cout << "ID: " << s.id << endl;                 // แสดงรหัส
    cout << "Nickname: " << s.nickname << endl;     // แสดงชื่อเล่น
    cout << "Line ID: " << s.lineId << endl;        // แสดง Line ID

    cout << "\n--- Student Contact ---\n";
    cout << "Mobile: " << s.myContact.mobile << endl; // แสดงเบอร์มือถือ
    cout << "Home: " << s.myContact.home << endl;     // แสดงเบอร์บ้าน

    cout << "\n--- Parent Data ---\n";
    cout << "Name: " << s.myParent.name << endl;          // แสดงชื่อผู้ปกครอง
    cout << "Relationship: " << s.myParent.relationship << endl; // แสดงความสัมพันธ์

    cout << "\n--- Parent Contact ---\n";
    cout << "Mobile: " << s.myParent.contact.mobile << endl; // แสดงเบอร์มือถือผู้ปกครอง
    cout << "Home: " << s.myParent.contact.home << endl;     // แสดงเบอร์บ้านผู้ปกครอง
}

// ===== ฟังก์ชันหลักของโปรแกรม =====
int main() {
    Student s1;          // สร้างตัวแปรนักเรียน 1 คน

    inputStudent(s1);   // เรียกฟังก์ชันรับข้อมูล
    showStudent(s1);    // เรียกฟังก์ชันแสดงข้อมูล

    return 0;           // จบการทำงานของโปรแกรม
}
