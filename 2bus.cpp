
#include <iostream>

using namespace std;

int main()
{
int n1,n2,i,j;
  cout<<"Enter the no of points in the route no 1: ";
  cin>>n1;
  int arr1[n1];
  cout<<"Enter the points in route no 1: ";
  for(i=0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  
  cout<<"\nEnter the no of points in route no 2: ";
  cin>>n2;
  int arr2[n2];
  cout<<"Enter the points in route no 2: ";
  for(i=0;i<n2;i++)
  {
    cin>>arr2[i];
  }
  cout<<"\nBoth the routes meet at busstop no: ";
  for(i=0;i<n1;i++)
  {
    for(j=0;j<n2;j++)
    {
      if(arr1[i]==arr2[j])
      {
        cout<<arr1[i]<<" ";
      }
    }
  }
    return 0;
}