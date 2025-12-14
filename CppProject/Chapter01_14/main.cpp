#include <iostream>

#define MY_NUMBER 9 // macro, preprocessor
#define MY_STRING "Hello World!"
#define MAX(a, b) ((a>b) ? a : b)
#define LIKE_APPLE

using namespace std;

int main()
{
    cout << MY_NUMBER << endl;
    cout << MY_STRING << endl;
    cout << MAX(1, 3) << endl;

#ifdef LIKE_APPLE // if definition
    cout << "Apple" << endl;
#endif

#ifndef LIKE_ORANGE // if not definition
    cout << "I dont have a orange" << endl;
#endif

    return 0;
}