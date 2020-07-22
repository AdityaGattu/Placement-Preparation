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
  struct node* head1=head;
  struct node* mainhead=head;
  cout<<"Before inserting:\n";
  
  while(head)
  {
    cout<<head->val<<"\n";
    head=head->right;
  }
  
    int pos,pos_val;
  cin>>pos>>pos_val;
  
  cout<<"Enter the value and position\n";
  cout<<"After inserting:\n";
  
  int count=1;
  
  while(count!=pos && pos>0)
  {
    head1=head1->right;
    count++;
  }
  
  if(pos==0)
  {
    struct node* t=new node();
    t->val=pos_val;
    t->right=head1;
    t->left=NULL;
    head1->left=t;
    mainhead=t;
  }
  else{
  struct node* temp=new node();
  temp->val=pos_val;
  temp->right=head1->right;
  temp->left=head1;
  head1->right=temp; 
  }
  
  while(mainhead)
  {
    cout<<mainhead->val<<"\n";
    mainhead=mainhead->right;
  }
  
  
  return 0;
}
