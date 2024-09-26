
#include <iostream>

using namespace std;

void bubblesort(int arr[],int size)
{
    bool isswapped=false;
    for(int i=0;i<size-1;i++)
    {
        isswapped=false;
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isswapped=true;
                
            }
        }
    
        if(isswapped==false)
        {
            break;
        }
    }

       cout<<"Sorted Array is";
       for(int k=0;k<size;k++)
        {
            cout<<arr[k];
        }
}

int main()
{
    int size;
    int i;
    cout<<"Enter size";
    cin>>size;
    int arr[size];
    cout<<"Enter Elements";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
        
    }
    bubblesort(arr,size);
    

    return 0;
}