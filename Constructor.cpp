//constructor
//It is a special member function of a class which has same name.
//it does not have returntype.
//it works in forward manner.
//when obj is created it initialize the constructor.
//we need to define constructor in public class
//it can be overloaded but cannot be override.
//Types of constructor 1) default 2)parameterized 3)copy constructor.
// q) can we have virtual constructor-no.
//q) can we have multiple constructor in a class-yes.
//q) can we overload or over ride constructor- we can overload but cannot override.

#include <iostream>
using namespace std;
class P
{
    public:
    P()
    {
        cout<<"P";
    }
};
class Q : public P
{
    public:
    Q()
    {
        cout<<"Q";
    }

    
};

int main()
{
    Q obj;

    return 0;
}

