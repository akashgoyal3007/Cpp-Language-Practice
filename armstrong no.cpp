#include <iostream>

using namespace std;
int power(int a,int b)
{
    int result=1,i;
    for(i=0;i<b;i++)
    {
        result=result*a;
    }
    return result;
}
int main()
{
    int num,temp,sum=0;
    cout<<"Enter Number";
    cin>>num;
    temp=num;
    int count=0;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    num=temp;
    while(num>0)
    {
        int r=num%10;
        sum=sum+power(r,count);
        num=num/10;
    }
    if(sum==temp)
    {
        cout<<"It is a Amstrong no";
    }
        else
        {
        cout<<"It is not a Amstrong no";
        }
    }

    

