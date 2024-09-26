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
  node*gethead()
  {
      return head;
  }
  void display(node*head)
  {
      if(head==NULL)
      {
          cout<<NULL;
      }
      else
      {
          cout<<head->data<<endl;
          display(head->next);
      }
  }
      
};


int main()
{
    linklist obj;
    obj.add(1);
    obj.add(3);
    obj.display(obj.gethead());

    return 0;
}


