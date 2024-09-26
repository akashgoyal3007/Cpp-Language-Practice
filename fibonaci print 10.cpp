
#include <iostream>

using namespace std;

void fab(int n1,int n2,int num)
{
if(num!=0)
{
  int result=n1+n2;
  cout<<result<<endl;
  n1=n2;
  n2=result;
  fab(n1,n2,num-1);
}
}
int main()
{
    int a,b;
    a=0,b=1;
    cout<<a<<b;
    fab(a,b,10);

    return 0;
}