#include <iostream>
#include "car.h"
#include <iostream>

using namespace std;
int main()
{
    car c1;
    c1.set_maker("hondi");
    c1.set_model(2019);
    c1.set_color("blue");
    cout<<"this car made by "<<c1.get_maker()<<endl;
    cout<<"and it's model is "<<c1.get_model()<<endl;
    cout<<"and it's color is "<<c1.get_color()<<endl;
    return 0;
}
