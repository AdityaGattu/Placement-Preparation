#include<iostream>
using namespace std;

struct node
{
  int val;
  node* left;
  node* right;
};
int main()
{
  //type your code here
  
    struct node* head=NULL;
    struct node* tail=NULL;
  
  while(1)
  {
    int x;
    cin>>x;
    if(x<0){break;}
    
    struct node *p=new node();
    p->val=x;
    if(head==NULL)
    {
      p->left=NULL;
      p->right=NULL;
      head=p;
      tail=p;
    }
    else{
    p->left=tail;
    tail->right=p;
    tail=p;
    }
   }
  
  while(head)
  {
    cout<<head->val<<"\n";
    head=head->right;
  }
  
  return 0;
}
