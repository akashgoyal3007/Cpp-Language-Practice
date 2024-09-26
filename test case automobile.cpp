
#include<iostream>
using namespace std;

int main()
{
    int v,w;
    cout<<"Enter Total Number of Vehicle";
    cin>>v;
    cout<<"Enter Total Number of Wheels";
    cin>>w;
     if ( w >= 2 && w % 2 == 0 && v < w)
     {
        int tw = 0, fw = 0;
        fw = (w - (2 * v)) / 2;
        tw = v - fw;
        cout << "TW=" << tw << " FW=" << fw << endl;
    } 
    else {
        cout << "INVALID INPUT" << endl;
    }
    
    

    return 0;
}
