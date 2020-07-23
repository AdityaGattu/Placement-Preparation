#include<bits/stdc++.h>
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
   map<int,int> m;
   struct node* head=NULL;
    struct node* tail=NULL;
  while(1)
  {
    int x;
    cin>>x;
    if(x<0){break;}
    
    struct node* temp=new node();
   if(m[x]==0){
     m[x]++;
    temp->val=x;
    if(head==NULL){ head=temp;tail=temp;}
    else{
      tail->next=temp;
      tail=temp;
    }
     
  }
    
    while(head)
    {
      cout<<head->val<<"\n";
      head=head->next;
    }
 
  } 
  return 0;
}
