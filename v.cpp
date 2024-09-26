#include <iostream>

using namespace std;


    
int main()
{
    string s;
    int a=0,b=0;
    cout<<"Enter a string";
    getline(cin,s);
    for(int i = 0; i < s.length();i++)
        if(s[i]=='#') 
            a++;
        else if(s[i]=='*')
            b++;
    cout<<b-a;
}
   