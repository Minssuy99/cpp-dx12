#include <iostream>

using namespace std;

int main()
{
    // 초기화하지 않은 변수
    int x;
    // Debug 모드: 런타임 에러
    // Release 모드: 쓰레기값 출력
    cout << x << endl;

    // 변수의 메모리 주소 출력
    int y = 10;
    cout << &y << endl;  // &는 주소 연산자

    // Initialization(초기화) vs Assignment(대입)
    int z = 100;  // 초기화: 변수 선언과 동시에 값 할당
    z = 10;       // 대입: 이미 선언된 변수에 값 할당

    int a(100);   // 괄호를 사용한 초기화 방식


    // L-value와 R-value 개념
    int c = 1;
    c = c + 2;              // c는 l-value (메모리 주소 존재)
    std::cout << c << std::endl;  // 출력: 3

    int d = c;              // 값 복사
    std::cout << d << std::endl;  // 출력: 3

    // (c + d)는 r-value: 임시 값으로 메모리 주소가 없음
    std::cout << c + d << std::endl;  // 출력: 6

    std::cout << c << std::endl;  // 출력: 3 (c는 변하지 않음)

    // 초기화하지 않은 변수 (쓰레기값)
    int f;
    std::cout << f << std::endl;

    return 0;
}