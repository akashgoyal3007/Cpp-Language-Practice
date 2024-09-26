#include <iostream>

using namespace std;
class b
{
    int x;
    public:
    void set(int a)
    {
       x=a;
    }
       void get()
    {
        cout<<x;
    }
       
    
};
int main()
{
    b obj;
    obj.set(5);
    obj.get();
    
    

    return 0;
}
