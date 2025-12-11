#include <iostream>

using namespace std;

void DoSomething(int z)
{
    z = 123;
    cout << "function's z value is : " << z << endl;
    cout << "function's z address is : " << &z << endl;
}

int main()
{
    int x = 1;

    cout << "x value is : " << x << ", Address is " << &x << endl;

    {
        int x = 1;
        cout << "x value is : " << x << ", Address is " << &x << endl;
    }

    {
        int x = 1;
        cout << "x value is : " << x << ", Address is " << &x << endl;
    }

    cout << endl;

    /* same address example*/
    int y = 0;

    cout << "y value is : " << y << ", Address is " << &y << endl;

    {
        y = 1;
        cout << "y value is : " << y << ", Address is " << &y << endl;
    }

    cout << "y value is : " << y << ", Address is " << &y << endl;

    cout << endl;

    int z = 0;
    cout << "z value is : " << z << endl;
    cout << "origin z address is : " << &z << endl;
    DoSomething(z);
    cout << "z value is : " << z << endl;

    return 0;
}