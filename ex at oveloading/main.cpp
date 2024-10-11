#include <iostream>
#include "clc.h"
#include <string>
using namespace std;

int main()
{
    clc c1(5,3);
    cout<<"this is add two int num = "<<c1.add(5,10)<<endl;
    cout<<"this is add three int num = "<<c1.add(5,10,20)<<endl;
    cout<<"this is add two float num = "<<c1.add(5.5,10)<<endl;
    cout<<"this is add three float num = "<<c1.add(5.0,10.0,15)<<endl;
    cout<<"this is add two string = "<<c1.add("Abdelrahman","Ahmed")<<endl;

    return 0;
}
