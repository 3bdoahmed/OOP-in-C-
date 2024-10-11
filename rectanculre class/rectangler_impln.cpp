#include "rectangler.h"
#include <iostream>
#include <string>
using namespace std;


   void rectangler::set_length(float len)
    {
        if (len >=0)
            length=len;
        else
            cout<<"please enter length with positive number "<<endl;
    }
    float rectangler::get_length()
    {
        return length;
    }
    void rectangler::set_width(float wid)
    {
        if (wid >=0)
            width=wid;
        else
            cout<<"please enter width with positive number "<<endl;
    }
    float rectangler::get_width()
    {
        return width;
    }
    float rectangler::get_area()
    {
        if (length >=0 && width >= 0)
        {
            return width*length;
        }
        else
            return 0;
    }

//---------->> initialization list to inti with any value you want.
    rectangler::rectangler(float l , float w ) : length(l), width(w)
{
    cout<<"inti length of recangler is equel "<< length<<endl ;
    cout<<"inti width of recangler is equel "<< width <<endl ;
}
//----------------------------------------------------------------
/* ---------->> initialization list to inti with defult value = 0
    rectangler::rectangler() : length(0), width(0)
{
    cout<<"length of recangler is equel "<< length<<endl ;
}*/
//-------------------------------------------------------------
    /*    -------->> fist method of using constractor
rectangler::rectangler()
{
    length = 0;
    width =0;
    cout<<"length of recangler is = "<< length<<endl ;
}*/

//--------------------------------------------------------------

rectangler::~rectangler()
{
    cout<<"the object life time is end "<<endl;
}
