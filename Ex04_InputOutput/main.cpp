#include <iostream>

using namespace std;

int main() 
{
    char user_input[100];

    // cout << "원하는 문장을 입력해주세요." << endl;
    // cout << "입력: ";

    // cin >> user_input;

    // cin.getline(user_input, sizeof(user_input));

    // cout << "메아리: " << user_input << endl;

    // int number = -1;
    // int number2 = -1;

    // cin >> number;

    // cin >> number2;

    // cout << number << " " << number2 << endl;

    int number = -1;

    cin >> user_input;
    // cin.getline(user_input, sizeof(user_input));
    cin.ignore(100, '\n');

    cin >> number;

    cout << user_input << " " << number << endl;

    return 0; 
}