#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
};
class linklist
{
  private:
  node*head,*tail;
  public:
  linklist()
  {
      head=NULL;
      tail=NULL;
  }
    node*gethead()
        {
          return head;
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

  
  void display(node*head)
  {
      if(head==NULL)
      {
          cout<<"Your last node";
      }
      else
      {
          cout<<head->data<<endl;
          display(head->next);
      }
  }
  void addinfront(int a)
     {
         node*abc=new node();
         abc->data=a;
         abc->next=head;
         head=abc;
     }
     void del(node*afterno)
     {
         node*temp;
         temp=afterno->next;
         afterno->next=temp->next;
         delete temp;
     }
     void addinmiddle(node*a,int value)
     {
         node*LA=new node();
         LA->data=value;
         LA->next=a->next;
         a->next=LA;
     }
      
};


int main()
{
    linklist obj;
    obj.add(1);
    obj.add(3);
    obj.addinfront(5);
    obj.del(obj.gethead()->next);
    
    obj.addinmiddle(obj.gethead(),10);
    obj.display(obj.gethead());

    return 0;
}




