#include <iostream>

using namespace std;

int main()
{
  int num1,num2,choice;
  cout<<"Enter the Numbers:"<<endl;
  cin>>num1>>num2;
  cout<<"Enter Your Choice"<<endl;
  cout<<"1.Addition"<<endl;
  cout<<"2.Substraction"<<endl;
  cout<<"3.Multiplication"<<endl;
  cout<<"4.Division"<<endl;
  cin>>choice;
  
  switch(choice)
  {
      case 1:
      {
          cout<<num1+num2;
          break;
      }
      case 2:
      {
          cout<<num1-num2;
          break;
      }
      case 3:
      {
          cout<<num1*num2;
          break;
      }
      case 4:
      {
          cout<<num1/num2;
      }
      default:
      {
         cout<<"Enter correct choice";
      }
      
  }
  
 

    return 0;
}


