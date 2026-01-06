#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    int n1 = 1,  n2 = 1;
    cout << "do-while 1 to 10" << endl;
    do
    {  
        cout << n1 << endl;
        n1++;

    } while (n1 <= 10);


    cout << "for 1 to 10" << endl;

    for (int i = 1; i <= 10; i++) 
    {
        cout << i << endl;
    }

    cout << "while 1 to 10" << endl;

    while (n2 <= 10)
    {
        cout << n2 << endl;
       n2++;
    }
    return 0;       
}
