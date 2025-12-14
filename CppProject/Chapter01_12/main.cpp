#include <iostream>

/* compiling is working but, linking error */
#include "DoSomething.h"
#include "Add.h"
/* add function is multiple definition(redefinition) */

using namespace std;

int main()
{
    DoSomething();

    return 0;
}