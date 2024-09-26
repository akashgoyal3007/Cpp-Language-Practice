//array is static in size
//it starts from 0 index
//last element index=size-1
#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int arr[size],newarr[size];
    int count=size-1;
    int j;
    cout<<"Enter array elements";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    for(j=0;j<size;j++)
    {
        newarr[j]=arr[count];
        count--;
        cout<<newarr[j];
    }
    

    return 0;
}