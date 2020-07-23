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
  
  while(head)
  {
    cout<<head->val<<" ";
    head=head->next;    
  }
  return 0;
}
