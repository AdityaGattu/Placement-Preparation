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
  int count=0;
  while(1)
  {
    
    int x;
    cin>>x;
    if(x<0){break;}
    
    struct node* temp=new node();
   
    temp->val=x;
    if(head==NULL){ head=temp;tail=temp;count++;}
    else{
      tail->next=temp;
      tail=temp;
      count++;
    }
  }
  
  cout<<"Enter the nth node:\n";
  int pos;
  cin>>pos;
  
  int need_to_find=count-pos;
  
  if(need_to_find<0){cout<<"There is no nth node in the list";}
  
  else{
  int cnt=0;
  while(head && cnt!=need_to_find)
  {
    head=head->next;
    cnt++;
  }
  cout<<head->val<<" is the nth node element in the list";
}
  return 0;
}
