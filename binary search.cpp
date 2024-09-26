#include <iostream>

using namespace std;

int main()
{
    int first,last,target=5,size;
    int i;
    first=0;
    last=size-1;
    cout<<"Enter size";
    cin>>size;
    int arr[size];
   
    cout<<"Enter Elements";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    while(first<=last)
    {
       int mid=(first+last/2);
       if(arr[mid]==target)
       {
           cout<<"found at"<<mid;
       }
       if(last>arr[mid])
       {
           first=mid+1;
       }
       else
       {
           last=mid-1;
       }
       
    }
    return 0;
}