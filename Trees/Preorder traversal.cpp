#include<iostream>
using namespace std;

struct node
{
  int data;
  node* left;
  node* right;
};

node* create(int data)
{
  struct node* t=new node();
  t->data=data;
  t->left=NULL;
  t->right=NULL;
  return t;  
}

node* insert(node* root,int data)
{
  if(root==NULL)
  {
    return create(data);
  }
  
  if(data < root->data)
  {
    root->left = insert(root->left,data);
  }
  
  if(data > root->data)
  {
    root->right = insert(root->right,data);
  }
  return root;
}

void preorder( node* root)
{
  if(!root){return;}
  
  cout<<root->data<<" ";
  preorder(root->left); 
  preorder(root->right);
  
}
int main()
{
  //type your code
  struct node* root= NULL;
  while(1)
  {
    int x;
    cin>>x;
    if(x<0){break;}
    
    root = insert(root, x); 
    
  }
  cout<<"Preorder Traversal:\n";
  
  preorder(root);
  
  return 0;
}
