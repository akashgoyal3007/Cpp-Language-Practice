#include <iostream>
using namespace std;
class P
{
    public:
   ~ P()
    {
        cout<<"P";
    }
};
class Q : public P
{
    public:
    ~Q()
    {
        cout<<"Q";
    }

    
};

int main()
{
    Q obj;

    return 0;
}
