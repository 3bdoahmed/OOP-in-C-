#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;


class car
{
    private:
        string maker;
        int model;
        string color;
    public:
        //setters or mutattor
        void set_maker(string mak);
        void set_model(int mod);
        void set_color(string col);
        //getter or accessor
        string get_maker();
        int get_model();
        string get_color();



    //protected:


};

#endif // CAR_H
