#include <iostream>

using namespace std;

void selectionsort(int arr[],int n)
   {
     int i,j,index;  
       for(i=0;i<n;i++)
       {
           index=i;
           for(j=i+1;j<n;j++)
           {
               if(arr[j]<arr[index])
               {
                   index=j;
               }
           }
            if(index!=i)
            {
                int temp=arr[i];
                arr[i]=arr[index];
                arr[index]=temp;
            }
      
       }
       cout<<"Sorted Array is";
       for(int k=0;k<n;k++)
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
   selectionsort(arr,size);
}
