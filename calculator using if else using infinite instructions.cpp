#include <iostream>

using namespace std;

int main()
{
int i=0,yes=0;
while (i==0)
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
  if(choice==1)
    {
      cout<<num1+num2<<endl;
    }
  else if(choice==2)
    {
        cout<<num1-num2<<endl;
    }
  else if(choice==3)
    {
        cout<<num1*num2<<endl;
    }
  else if(choice==4)
    {
        cout<<num1/num2<<endl;
    }
    else
    {
        cout<<"Enter correct choice";
    }
cout<<"do you want to exit press 1 else 2"<<endl;
cin>>yes;
if (yes==1)
{
    i=1;
}
}
  
 

    return 0;
}


