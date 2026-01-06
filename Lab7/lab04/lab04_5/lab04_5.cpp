#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main() {

    std::srand(time(0));

    int targetNumber = (rand() % 100) + 1;

    int guess = 0;
    int guessCount = 0;

    cout << "--- ยินดีต้อนรับสู่เกมทายตัวเลข! ---" << endl;
    cout << "ฉันได้สุ่มเลขหนึ่งตัวระหว่าง 1 ถึง 100 แล้ว" << endl;
    cout << "คุณคิดว่าเป็นเลขอะไร? ลองทายมาเลย!" << endl;
    cout << "------------------------------------" << endl;


    do {
        cout << "ทายเลขของคุณ: ";
        cin >> guess;
        guessCount++;


        if (guess > targetNumber) {
            cout << "มากเกินไป! ลองทายเลขที่น้อยลง" << endl;
        }
        else if (guess < targetNumber) {
            cout << "น้อยเกินไป! ลองทายเลขที่มากขึ้น" << endl;
        }
        else {
 
            cout << " เยี่ยมมาก! คุณทายถูกแล้ว!" << endl;
            cout << " เลขที่ถูกต้องคือ " << targetNumber << " ค่ะ" << endl;
            cout << "รวมจำนวนครั้งที่คุณทาย: " << guessCount << " ครั้ง" << endl;
        }

    } while (guess != targetNumber);

    return 0;
}