#include "clc.h"
#include <iostream>
#include <string>
using namespace std;
//------------------------------------
//------>> two method of constructor (ex at overloading with constructor)
clc::clc()
{}
//------------------------------------
void clc::add(int num1, int num2 )
{
    int sum;
    sum= num1+num2;
   cout<<"sum of two number = "<<sum<<endl;
}
void clc::mult(int num1, int num2)
{
   int mu;
   mu= num1*num2;
   cout<<"multply of two number = "<<mu<<endl;
}

/*clc::clc()
{
    //ctor
}
*/
clc::~clc()
{
}
