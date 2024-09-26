
#include <iostream>

using namespace std;

class A
{
  public:
  virtual void add() =0;
  
  void sub(int num1,int num2)
  {
      int a;
      a=num1-num2;
      cout<<a;
  }
};
class B:public A
{
    public:
      void mul(int num1,int num2) 
      {
          int b;
          b=num1*num2;
          cout<<b;
      }
      
      void add()
      {
          cout<<"Sjj"<<endl;
      }
};
  
int main()
{
    B obj;
    obj.add();
    obj.sub(3,2);
    obj.mul(3,2);
   

    return 0;
}