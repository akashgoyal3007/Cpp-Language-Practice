
#include <iostream>

using namespace std;

class A
{
    public: 
    virtual void add()
    {
        cout<<"A";
    }
};

class B: public A
{
     public:
     void add()
    {
        cout<<"B";
    }
};


int main()
{
    A* P;
    B obj;
    P=&obj;
    P->add();
    
}