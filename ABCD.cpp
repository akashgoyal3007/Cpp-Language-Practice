
#include <iostream>

using namespace std;

class A

{
  public:
virtual void add(int z)
{
   cout<<"awezs"; 
}
};
class B:public  A
{
  public:
  void add(int z)
  {
   cout<<"gfgfc";
  }
};
int main()
{
    A* obj;
    B b;
    obj=&b;
    obj->add(6);
   
    return 0;
}