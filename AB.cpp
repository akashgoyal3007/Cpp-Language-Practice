#include <iostream>

using namespace std;

class A

{
  public:
 void add()
{
   cout<<"awezs"; 
}
};
class B
{
  public:
  void add()
  {
   cout<<"gfgfc";
  }
};
class C:public A, public B
{
  public:
  void add()
  {
      cout<<"jsbhd";
  }
};
int main()
{
    
    C obj;
    obj.add();
   
    return 0;
}
