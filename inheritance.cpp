
#include <iostream>

using namespace std;
 class akash
{
    public:
    void Hello()
    {
    cout<<"Hello";
    }
};
class Abhishek : public akash
{
    public:
    void hay()
    {
    cout<<"How are you";
    }
};

int main()
{
    Abhishek obj;
    obj.Hello();
    obj.hay();
    

    return 0;
}