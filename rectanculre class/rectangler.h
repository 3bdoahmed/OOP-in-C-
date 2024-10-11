#ifndef RECTANGLER_H
#define RECTANGLER_H
#include <string>

class rectangler
{
    private:
        float length;
        float width;
    public:
        void set_length(float len);
        void set_width(float wid);
        float get_length();
        float get_width();
        float get_area();



        rectangler(float len ,float wid);
        virtual ~rectangler();

};

#endif // RECTANGLER_H
