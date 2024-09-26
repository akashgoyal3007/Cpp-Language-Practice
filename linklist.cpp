

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
  node*head,*tail;
  linklist()
  {
      head=NULL;
      tail=NULL;
  }
  void add(int a)
  {
      node*p=new node();
      p->data=a;
      p->next=NULL;
      if(head==NULL)
      {
          head=p;
          tail=p;
      }
      else
      {
          tail->next=p;
          tail=tail->next;
      }
      
  }
      void display()
        {
            cout<<head->data<<tail->data;
        }
};


int main()
{
    linklist obj;
    obj.add(1);
    obj.add(2);
    obj.display();

    return 0;
}

