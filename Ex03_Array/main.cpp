#include <iostream>

using namespace std;

int main() 
{
    int a = 1;
    int b = 2;
    int c = 3;

    int my_array[3] = {1, 2, 3};

    // 인덱싱 (zero-based)
    cout << my_array[0] << " "
        << my_array[1] << " "
        << my_array[2] << endl; // 1 2 3

    my_array[1] = 5;

    cout << my_array[0] << " "
        << my_array[1] << " "
        << my_array[2] << endl; // 1 5 3 

    // cout << my_array[10000] << endl; // 

    // 문자열은 기본적으로 문장의 배열
    char name[14] = "Hello, World!"; // 문자와'' 문자열 "" 구분
    // 초기값 지정 시에 크기 지정 안 해도됨, 알아서 해줌
    // Null character '\0' 
    // 총 13글자 이지만, 널 캐릭터로 +1 글자
    cout << name << " " << sizeof(name) << endl;

    name[0] = 'A';
    name[1] = 'B';
    name[2] = 'C';

    cout << name << endl; // ABC
    name[2] = '\0';
    cout << name << endl; // A[null]C

    return 0;
}