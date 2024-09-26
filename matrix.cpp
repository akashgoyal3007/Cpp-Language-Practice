/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
int R,C;
cout<<"Enter No of rows";
cin>>R;

cout<<"Enter No of Columns";
cin>>C;
int i,j;
int arr[R][C];
cout<<"Enter the Elements 0 or 1";

for(i=0;i<R;i++)
{
  for(j=0;j<C;j++)
  {
   cin>>arr[i][j];  
  }
}
int onecount=0;
int rowcount=0;
int count=0;
for(i=0;i<R;i++)
{
    count=0;
    for(j=0;j<C;j++)
    {
        if(arr[i][j]==1)
        {
            count++;
        }
    }
    if(count>onecount)
    {
        onecount=count;
        rowcount=i;
    }
}
cout<<"Maximum no of 1's is  "<<rowcount+1;
}