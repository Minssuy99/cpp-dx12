#include <iostream>

using namespace std;

namespace MySpace1
{
    int doSomething(int a, int b)
    {
        return a + b;
    }
}

namespace MySpace2
{
    int doSomething(int a, int b)
    {
        return a * b;
    }
}

namespace MySpace3
{
    namespace InnerSpace
    {
        void function()
        {
            cout << "Inner function" << endl;
        }
    }
}

int main()
{
    using namespace MySpace1;
    // using namespace MySpace2;

    doSomething(1, 3);

    MySpace3::InnerSpace::function();

    return 0;
}