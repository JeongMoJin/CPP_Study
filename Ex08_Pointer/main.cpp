#include <iostream>

using namespace std;

int main() 
{
    int a = 123;

    // address of 주소 연산자 & ampersand
    cout << a << " " << &a << endl;

    // 참고: 파이썬 id()와 비교

    int *b = &a; // b에 a의 주소 대입

    // deference operator (역참조 연산자)
    cout << b << " " << *b << endl;

    *b = 567;
}