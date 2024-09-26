#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    char i;
    char n;
    cout<<"Enter string";
    getline(cin,str);
    
    n=str.length()-1;
    i=0;
    while(i<=n)
    {
        swap(str[i],str[n]);
        i++;
        n--;
    }
    cout<<str;
    return 0;
}