#include <iostream>

using namespace std;
class Animal
{
    public:
    void makesound()
    {
    cout<<"dj";
    }
};
class dog: public Animal
{
    public:
    void makesound()
    {
    cout<<"bark";
    }
};
class cat: public Animal
{
    public:
    void makesound()
    {
    cout<<"Meow";
    }
};
class bird: public Animal
{
    public:
    void makesound()
    {
    cout<<"bbbb";
    }
};
int main()
{
    bird obj;
    obj.makesound();

    return 0;
}