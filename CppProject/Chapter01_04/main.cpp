#include <iostream>  // cout, cin, endl 등
#include <cstdio>    // printf

int main()
{
    int x = 1024;

    // << : 출력 연산자 (output operator)
    // 여러 개를 연결(chaining)하여 사용 가능
    std::cout << "Hello world" << std::endl;
    std::cout << "x is " << x << "." << std::endl;

    // \t : 탭 문자 (Tab)
    // 다음 탭 위치까지 공백으로 채움
    std::cout << "abc" << "\t" << "def" << std::endl;
    std::cout << "ab" << "\t" << "def" << std::endl;
    std::cout << "a" << "\t" << "d" << std::endl;

    // \a : 알람/벨 소리 (Alert/Bell)
    // 시스템에 따라 소리가 나거나 화면이 깜빡임
    std::cout << "\a" << std::endl;

    // >> : 입력 연산자 (input operator)
    // 사용자로부터 값을 입력받음
    int y;
    std::cout << "input your number: ";
    std::cin >> y;

    std::cout << "your input is " << y << "." << std::endl;

    return 0;
}