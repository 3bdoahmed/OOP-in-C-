#include "dis.h"
#include <iostream>

using namespace std;

void dis::set_dis(int f, float i)
{
    feet =f ;
    inches=i;
}
void dis::print()
{
    cout<<"the value of feet= "<< feet <<" and value of inches= "<< inches <<endl;
}
dis::dis(): feet(0), inches(0)
{}
dis::dis(int f, float i): feet(f), inches(i)
{}

dis::~dis()
{
  //cout<<"the object is ended"<<endl;
}