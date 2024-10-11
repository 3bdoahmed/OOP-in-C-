#ifndef CLC_H
#define CLC_H
#include <string>
using namespace std;

class clc
{
    private:
        int num1,num2;


    public:
       static void add(int num1, int num2 );
       static void mult(int num1, int num2);





        clc();
        virtual ~clc();

    protected:


};

#endif // CLC_H
