#include "clc.h"
#include <iostream>
#include <string>
using namespace std;
//------------------------------------
//------>> two method of constructor (ex at overloading with constructor)
clc::clc(): num1(0),num2(0)
{
    cout<<"num1 && num2 is equal zero \n";
}
clc::clc(int a ,int b):num1(a),num2(b)
{
    int sum ;
    sum = num1+num2;
   cout<<"sum of num1 && num2 = "<<sum<<endl;
}
//------------------------------------
int clc::add(int num1, int num2 )
{
    return num1+num2;
}
int clc::add(int num1, int num2, int num3)
{
   return num1+num2+num3;
}
float clc::add(float num1, float num2)
{
    return num1+num2;
}
float clc::add(float num1, float num2, float num3)
{
    return num1+num2+num3;
}
string clc::add(string a, string b)
{
    return a + " " +b;
}

/*clc::clc()
{
    //ctor
}
*/
clc::~clc()
{
    cout<<"the object is end \n";
}
