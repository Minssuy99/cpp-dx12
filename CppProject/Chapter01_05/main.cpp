#include <iostream>

using namespace std;

int AddTwoNumbers(int num_a, int num_b)
{
    int sum = num_a + num_b;
    return sum;
}

void PrintHelloWorld()
{
    cout << "Hello World!" << endl;
}

int main()
{
    cout << AddTwoNumbers(1, 2) << endl;
    cout << AddTwoNumbers(3, 4) << endl;
    cout << AddTwoNumbers(8, 13) << endl;

    PrintHelloWorld();

    return 0;
}