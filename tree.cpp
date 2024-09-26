
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
  cout<<root->left->right->data;
  

    return 0;
}