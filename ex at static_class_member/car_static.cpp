#include "car_static.h"
#include <iostream>

int car_static:: counter =0;

void car_static::get_counter()
{
    cout<<"counter reached to "<<counter<<endl;
}

car_static::car_static()
{
    counter++;
}

car_static::~car_static()
{
    counter--;
}
