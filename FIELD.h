#ifndef FIELD_H
#define FIELD_H


class FIELD
{
    public:
        FIELD();
        virtual ~FIELD();

    protected:

    private:
    int size_x,size_y;
    typedef enum{bomb,near_1,near_2,near_3,near_4,near_5,near_6,near7,near_8,near_0} condition;
    typedef pair<condition,bool>v_condition ;
    v_condition field**;
};

#endif // FIELD_H
