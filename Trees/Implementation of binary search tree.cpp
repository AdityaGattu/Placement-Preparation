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

void inorder( node* root)
{
  if(!root){return;}
  
  inorder(root->left);
  cout<<root->data<<" "; 
  inorder(root->right);
  
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
  cout<<"Tree values are:\n";
  
  inorder(root);
  
  return 0;
}
