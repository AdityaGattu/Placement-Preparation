#include<iostream>
using namespace std;
struct node
{
  int val;
  node* next;
};

struct node* head;
struct node* tail;
int main()
{
  //type your code
  
  while(1)
  {
    int x;
    cin>>x;
    if(x<0){break;}
    struct node* t=new node();
    t->val=x;
    if(head==NULL){head=tail=t;}
    else
    {
      t->next=head;
      head=t;
    }
  }
  
  struct node* head1=head;
  cout<<"Before deleting:\n";
  while(head)
  {
    cout<<head->val<<" ";
    head=head->next;    
  }
  struct node* p=NULL;
  cout<<"\n";
  while(head1)
  {
    cout<<"Deleted element is "<<head1->val<<"\n";
    p=head1->next;
    delete(head1);
    head1=p;
  }
  cout<<"Stack is empty";
  
  return 0;
}
