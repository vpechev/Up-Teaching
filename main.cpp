#include <iostream>
#include "number.h"

using namespace std;

int main()
{
    Number* number = new Number(5);
    Number* number2 = new Number(10);
    *number+=*number2;
    Number b = *number + *number2;
    *number+=-4;
    cout<<*number<<endl<<b<<endl;
    return 0;
}
