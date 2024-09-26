
#include <iostream>

using namespace std;
class point
{
    public:
    int x,y;
};
class dist: public point
{
  public:
  int d;
  void calculateDistance()
  {
      d=y-x;
      cout<<"distance"<<d;
  }
};

int main()
{
    dist obj;
    obj.x = 5;
    obj.y = 10;
    obj.calculateDistance();

    return 0;
}