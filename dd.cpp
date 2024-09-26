#include <iostream>

using namespace std;
class Vehicle
{
    public:
    void move()
    {
    cout<<"left,right,back,straight"; 
    }
};
class car: public Vehicle
{
    public:
    void move()
    {
    cout<<"right";
    }
};
class truck: public Vehicle
{
    public:
    void move()
    {
    cout<<"left";
    }
};
class bicycle: public Vehicle
{
    public:
    void move()
    {
    cout<<"straight";
    }
};
int main()
{
    bicycle obj;
    obj.move();

    return 0;
}
