#include <iostream>

using namespace std;

class A
{
    public:
    void add(int a,int b)
    {
        cout<<"First Iteration   "<<a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<"Second Iteration  "<<a+b+c<<endl;
    }
    void add(double a,double b)
    {
    cout<<"Third Iteration   "<<a+b;
    }
};


int main()
{
    A obj;
    obj.add(2,3);
    obj.add(1,2,3);
    obj.add(9,9,9);
    obj.add(2,2,2);
    obj.add(1.1,1.1);
    
    return 0;
}