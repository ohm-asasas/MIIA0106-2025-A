#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const int multiplier = 9;

 
    const int start = 1;
    const int end = 12;

  
    cout << "--- µÒÃÒ§ÊÙµÃ¤Ù³áÁè " << multiplier << " ---" << endl;

    for (int i = start; i <= end; ++i) {
  
        int result = multiplier * i;

        cout << multiplier << " x " << std::setw(2) << i
            << " = " << result << endl;
    }

    cout << "---------------------------------" << endl;

    return 0;
}