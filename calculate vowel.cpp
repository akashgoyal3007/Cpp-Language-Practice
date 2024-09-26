
#include <iostream>

using namespace std;

int main()
{
    string a;
    int vowel=0;
    int consonent=0;
    cout<<"Enter the string"<<endl;
    getline(cin,a);
    for(int i = 0; i< a.length();i++)
    {
        char C = a[i];
       if(C=='A'||C=='a'||C=='E'||C=='e'||C=='I'||C=='i'||C=='O'||C=='o'||C=='U'||C=='u')
        {
            vowel++;
        } 
        else if(C == ' ')
        {
            continue;
        }
        else
        {
            consonent++;
        }
    }
    cout<<"TOTAL NO OF VOWELS ARE="<<vowel<<endl;
    cout<<"TOTAL NO OF CONSONENTS ARE="<<consonent;
    return 0;
}