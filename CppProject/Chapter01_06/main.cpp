#include <iostream>

using namespace std;

int main()
{
    // 변수 명명 규칙 (Naming Convention)

    // 1. camelCase: 일반 변수, 함수 (가장 흔함)
    int playerHealth = 100;
    int maxSpeed = 50;

    // 2. PascalCase: 클래스, 구조체 이름
    int PlayerPosition = 10;  // 변수에는 잘 안 씀

    // 3. snake_case: C 스타일, 일부 회사 규칙
    int player_health = 100;
    int max_speed = 50;

    // 4. _underscore 접두사: 멤버 변수 (클래스 내부)
    int _health = 100;
    int _mana = 50;

    // 5. m_ 접두사: 멤버 변수 (member의 m)
    int m_health = 100;
    int m_mana = 50;

    // 6. UPPER_CASE: 상수, 매크로
    const int MAX_HEALTH = 100;
    const int PLAYER_SPEED = 50;

    return 0;
}