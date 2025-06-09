#include <iostream>

using namespace std;

int main()
{
    // 변수를 정의할 때 자료형을 미리 지정해야 합니다.
    // 자료형은 바꿀 수 없습니다.

    // 내부적으로 메모리를 이미 갖고 있습니다.
    int i; // 변수 정의
    i = 123; // 변수에 값 지정 (객체 레퍼런스 아님)

    // sizeof 소개
    cout << i << " " << sizeof(i) << endl;  // 추측해보세요.
    // 123 4
    // sizeof : 변수나 자료형의 크기

    cout << sizeof(int) << endl;
    // 4

    cout << 123 + 4 << " " << sizeof(123 + 4) << endl;
    // 127 4

    float f = 123.456f; // 마지막 f 주의 
    double d = 123.456; // f 불필요

    cout << f << " " << sizeof(f) << endl; // 123.456 4
    cout << d << " " << sizeof(d) << endl; // 123.456 8

    // C++는 글자 하나와 문자열을 구분합니다.
    char c = 'a';
    char str[] = "Hello, World!"; // std::string

    cout << c << " " << sizeof(c) << endl; // a 1

    // 형변환
    i = 987.654; // double 을 int에 강제로 저장 987

    cout << "int from double " << i << endl; //
    
    // 987 버림 

    f = 567.89; // 이것도 형변환
    // f = 567.89f

    // 기본 연산자

    // i = 987;

    i += 100; // i = 1087
    i++; // 1088

    cout << i << endl; // 1088

    // 불리언
    bool is_good = true;
    is_good = false;

    cout << is_good << endl; // 0 

    is_good = true;

    cout << is_good << endl; // 1

    cout << boolalpha << true << endl; // true
    cout << is_good << endl; // false
    cout << noboolalpha << true << endl; // 1

    cout << boolalpha;
    cout << (true && true) << endl; // True
    cout << (true || false) << endl; // True

    cout << "----------비교---------" << endl;
    // 비교
    cout << (1>3) << endl; // False
    cout << (3==3) << endl; // True
    cout << (i >= 3) << endl; // True
    cout << ('a' != 'c') << endl; // True
    cout << ('a' != 'a') << endl; // False

    // 영역(scope)
    cout << "-----영역-----" << endl;

    i = 123; // 더 넓은 영역
    {
        // int i = 345; // 더 좁은 영역
        cout << i << endl; // 345 > 123
    }
    cout << i << endl; // 123

    return 0;
}