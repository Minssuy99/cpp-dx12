#include <iostream>

using namespace std;

int main()
{
    // x is a variable, 2 is a literal.
    // = : 대입 연산자 Assignment operator
    int x = 2;

    // + : 연산자 Operator (정확하게는 이항 연산자, 피연산자가 2개)
    // x, 2 : 피연산자 operand
    cout << x + 2 << endl;
    cout << "Hello, World!" << endl;

    // 삼항 연산자(ternary operator)
    int y = (x > 0) ? 1 : 2;

    cout << y << endl;

    return 0;
}