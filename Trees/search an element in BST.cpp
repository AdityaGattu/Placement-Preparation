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

node* search(node* root,int ele)
{
  if(root==NULL || root->data == ele ) {return root;}
  if(ele < root->data){return search(root->left,ele);}
  if(ele > root->data){return search(root->right,ele);}
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
  cout<<"Enter the element to be searched:\n";
  
  int y;
  cin>>y;
  
   node* p=search(root,y);
   if(p)
   {cout<<y<<" is present in the BST\n";}
   else{cout<<y<<" is not present in the BST\n";}

  
  return 0;
}
