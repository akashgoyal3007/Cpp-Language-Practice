
#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    char i;
    cout<<"Enter string";
    getline(cin,str);
    cout<<str;
    int count=str.length()-1;
    for(int i=0;i<str.length()-1;i++)
    {
        if(i!=count&&i<count)
        {
            char temp;
            temp=str[i];
            str[i]=str[count];
            str[count]=temp;
            count--;
        }
    }
   
    cout<<endl<<"Swapped string"<<str;
    


    return 0;
}

