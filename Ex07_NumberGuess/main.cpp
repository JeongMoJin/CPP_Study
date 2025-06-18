#include <iostream>

using namespace std;

int main() 
{
    int AnNumber = 57;


    // while (1)
    // {
    //     int guess;
    //     cout << "입력: ";
    //     cin >> guess;

    //     if (guess > 57) {
    //         cout << "숫자가 너무 커요" << endl;
    //     }
    //     else if (guess < 57) {
    //         cout << "숫자가 너무 작아요" << endl;
    //     }
    //     else {
    //         cout << "정답입니다." << endl;
    //         break;
    //     }
    // }

    while(1)
    {
        int guess;
        cout << "입력: ";
        cin >> guess;

        if (guess == AnNumber) 
        {
            cout << "정답" << endl;
            break;
        }
        else if (guess > AnNumber)
        {
            cout << "너무 커요!" << endl;
        }
        else 
        {
            cout << "너무 작아요!" << endl;
        }
    }
}