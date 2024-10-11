#include "car.h"
#include <string>
using namespace std;

void car::set_maker(string mak)
{
    maker=mak;
}
void car::set_model(int mod)
{
    model =mod;
}
void car::set_color(string col)
{
    color =col;
}
string car::get_maker()
{
    return maker;
}
string car::get_color()
{
    return color;
}
int car::get_model()
{
    return model;
}
