#ifndef CLC_H
#define CLC_H
#include <string>
using namespace std;

class clc
{
    private:
        int num1,num2;


    public:
        int add(int num1, int num2 );
        int add(int num1, int num2, int num3);
        float add(float num1, float num2);
        float add(float num1, float num2, float num3);
        string add(string a, string b);




        clc(); // one overloading constructor
        clc(int a , int b); // two overloading constructor
        virtual ~clc();

    protected:


};

#endif // CLC_H
