
#include <iostream>

using namespace std;
 
class B
{
    public:
    void add(int num1, int num2)
    {
    int b;
    b=num1+num2;
    cout<<b<<endl;
    }
    
    void add(int num1,int num2,int num3)
    {
    int b;
    b=num1+num2+num3;
    
    cout<<b;
    }
    
};

int main()
{
    B obj;
    obj.add(2,3);
    obj.add(6,8,8);
}
    