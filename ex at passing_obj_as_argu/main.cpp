#include <iostream>
#include "dis.h"

using namespace std;

int main()
{
    dis d1(3,2.25);
    dis d2(7,7.75);
    dis d3= d2.add_dis(d1); // return type of func add_dis is dis
    d3.print();


    return 0;
}
