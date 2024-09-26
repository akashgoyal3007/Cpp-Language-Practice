#include <iostream>

using namespace std;

int main()
{
    int t,i,j;
    cout<<"Enter the total time of the party";
    cin>>t;
    int in[t];
    
    for(i=0;i<t;i++)
    {
        cout<<"Enter the no of entries";
        cin>>in[i];
     }
     
     for(i=0;i<t;i++)
    {
        cout<<in[i];
    }
    
    
    
    
    
    
    //out
    
     int out[t];
    
    for(j=0;j<t;j++)
    {
        cout<<endl<<"Enter the number of exits";
        cin>>out[j];
    }  
    
    for(j=0;j<t;j++)
    {
        cout<<out[j];
    }  
    
    
     int max = 0, sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += in[i] - out[i];
        if(sum > max)
        {
            max = sum;
        }
    }
    cout<<"jjkhkhkhkh"<<max;
    

    return 0;
}