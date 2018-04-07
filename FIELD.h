#ifndef FIELD_H
#define FIELD_H
#include <utility>

using namespace std;
class FIELD
{
    public:
        FIELD();
        virtual ~FIELD();

    protected:

    private:
    int size_x,size_y;
    typedef enum{bomb,near_1,near_2,near_3,near_4,near_5,near_6,near7,near_8,near_0} condition;
    typedef enum{flag,v_near_1,v_near_2,v_near_3,v_near_4,v_near_5,v_near_6,v_near7,v_near_8,v_near_0,unvised} v_condition;
    typedef pair<condition,v_condition> x ;
    x** field;
};

#endif // FIELD_H
