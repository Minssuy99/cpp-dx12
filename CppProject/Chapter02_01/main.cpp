#include <iostream>

using namespace std;

int main()
{
    bool bool_value = false;
    char char_value = 65;
    float float_value = 3.141592f;
    double double_value = 3.141592;

    cout << bool_value << endl;
    cout << char_value << endl;
    cout << float_value << endl;
    cout << double_value << endl;

    auto a_value = 3.141592;
    auto b_value = 3.141592f;

    cout << sizeof(a_value) << endl;
    cout << sizeof(b_value) << endl;

    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;

    // copy initialization
    int a = 123;

    // direct initialization
    int b(123);

    // Uniform initialization
    int c{123};


    return 0;
}