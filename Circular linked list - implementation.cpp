#include<iostream>
using namespace std;

struct node
{
  int val;
  node* next;
};
struct node* head=NULL;
struct node* tail=NULL;

int main()
{
  //type your code here
  
  while(1)
  {
    int x;
    cin>>x;
    if(x<0){break;}
    
    struct node* temp=new node();
    temp->val=x;
    if(head==NULL){tail=temp;head=temp;head->next=head;}
    
    tail->next=temp;
    temp->next=head;
    tail=temp;
  }
  
  while(head!=tail)
  {
    cout<<head->val<<"\n";
    head=head->next;
  }
  cout<<head->val<<"\n";
  return 0;
}
