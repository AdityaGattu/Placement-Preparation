#include<iostream>
using namespace std;

struct node
{
int val;
node* next;
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
    
    struct node* temp=new node();
   
    temp->val=x;
    if(head==NULL){ head=temp;tail=temp;}
    else{
      tail->next=temp;
      tail=temp;
    }
  }
  
  if(head->next==NULL || head==NULL){ cout<<"There is no second last element in the list"; }
  else{
  while(head->next->next!=NULL)
  {
    head=head->next;
  }
  cout<<head->val<<" is the second last element in the list";
}
  return 0;
}
