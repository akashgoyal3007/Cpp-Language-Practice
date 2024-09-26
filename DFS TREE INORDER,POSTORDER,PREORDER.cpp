
#include <iostream>

using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* newnode(int n)
{
    node* root=new node();
    root->data=n;
    root->left=NULL;
    root->right=NULL;
    return root;
    
}

void printinorder(node* temp)
{
    if(temp==NULL)
    {
        return;
    }
    printinorder(temp->left);
    cout<<temp->data<<"  ";
    printinorder(temp->right);
}

void printpreorder(node* temp)
{
    if(temp==NULL)
    {
        return;
    }
    cout<<temp->data<< "  ";
    printpreorder(temp->left);
    printpreorder(temp->right);
}

void printpostorder(node* temp)
{
    if(temp==NULL)
    {
        return;
    }
    printpostorder(temp->left);
    printpostorder(temp->right);
    cout<<temp->data<< "  ";
}

int main()
{
  struct node* root;
  root=newnode(1);
  root->left=newnode(2);
  root->right=newnode(3);
  root->left->left=newnode(4);
  root->left->right=newnode(5);
  root->right->left=newnode(6);
  root->right->right=newnode(7);
  cout<<"DFS INORDER="<<endl;
  printinorder(root);
  cout<<endl <<"DFS PREORDER="<<endl;
  printpreorder(root);
  cout<<endl<<"DFS POSTORDER="<<endl;
  printpostorder(root);
  

    return 0;
}


