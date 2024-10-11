#ifndef DIS_H
#define DIS_H


class dis
{
    private:
        int feet;
        float inches;
    public:
        void set_dis(int f, float i);
        void print();
        dis add_dis(dis d_2);

        dis();
        dis(int f, float i);
        virtual ~dis();

    protected:


};

#endif // DIS_H
