#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int arr[size];
    int count=size-1;
    
    cout<<"Enter array elements";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<size;i++)
    {
        if(i!=count&&i<count)
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count--;
        }
    }
   for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
        
    }
    cout<<"Reverse array";

    return 0;
}