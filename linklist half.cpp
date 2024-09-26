

#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
};
class linklist
{
  public:
  void add(int n)
  
  {
      node*a=new node();
      a->data=n;
      a->next=NULL;
      cout<<a->data<<a->next;  
      
  }
      
};

int main()
{
    linklist obj;
    obj.add(1);

    return 0;
}
