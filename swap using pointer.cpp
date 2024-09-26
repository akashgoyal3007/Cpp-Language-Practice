#include <iostream>

using namespace std;

int main()
{
  int num1=10,num2=20;
  int*p;
  int*q;
  p=&num1;
  q=&num2;
  cout<<*p<<*q;
  *p=*p+*q;
  *q=*p-*q;
  *p=*p-*q;
  cout<<*p<<endl<<*q;
  
 
    

    return 0;
}
