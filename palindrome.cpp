#include <iostream>

using namespace std;

int main()
{
    int n,r=0;
    cout<<"Enter number";
    cin>>n;
    int temp=n;
    int sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<"It is a palindrome";
    }
   else
        {
           cout<<"Not a palindrome"; 
        }
        
         return 0;
}
