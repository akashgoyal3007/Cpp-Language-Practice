
#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    int i;
    cout<<"Enter string";
    getline(cin,str);
    //cout<<str;
    //cout<<endl<<str.length();
    for(i=str.length()-1;i>=0;i--)
    
    {
        
        cout<<str[i];
    }
    

    return 0;
}
