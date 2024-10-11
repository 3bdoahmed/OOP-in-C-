#include <iostream>
#include "dis.h"

using namespace std;

int main()
{
    dis d1;
    d1.print();
    dis d2(5,3.5);
    dis d3(d2);
    d3.print();
    d3.set_dis(10,2.5);
    dis d4=d3;
    d4.print();

    return 0;
}
