#include <iostream>
using namespace std;
int main()
{
    int result=1,num;
    cout<<"enter number";
    cin>>num;
    for(int i=num;i>0;i--)
    {
        result=result*i;
    }
    cout<<result;
}