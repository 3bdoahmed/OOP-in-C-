#ifndef CAR_STATIC_H
#define CAR_STATIC_H
#include <string>

using namespace std;
class car_static
{
    private:
        string marka;
        int model;
        static int counter;

    public:
        void set_marka(string m);
        void set_model(int mod);
        void get_counter();

        car_static();
        virtual ~car_static();

    protected:

    private:
};

#endif // CAR_STATIC_H
