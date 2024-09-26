#include <iostream>

using namespace std;

int main()
{
  int num1,num2;
  cout<<"Enter num1"<<endl;
  cin>>num1;
  cout<<"Enter num2"<<endl;
  cin>>num2;
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  cout<<num1<<endl<<num2;
    

    return 0;
}
