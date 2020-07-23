#include<bits/stdc++.h>
#include<iostream>
using namespace std;
  stack<int> s1;
  stack<int> s2;
struct Que{
  

  
void enqueue(int x)
{
  
  while(!s1.empty())
  {
    s2.push(s1.top());
    s1.pop();
  }
  s1.push(x);
  
  while(!s2.empty())
  {
    s1.push(s2.top());
    s2.pop();
  }
}

void dequeue(int y)
{
  if(!s1.empty())
  {
    s1.pop();
  }
}
};
int main()
{
  //type your code
  struct Que q;
  int n;
  cout<<"Enter the size of stack:\n";
  cin>>n;
  if(n!=0){cout<<"Enter the stack values:\n";}
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    if(x<0)
    {break;}
    q.enqueue(x);
  }
  
  if(s1.empty())
  {}
  else
  {
    cout<<"Queue elements are:\n";
  while(!s1.empty())
  {
    
    cout<<s1.top()<<" ";
    s1.pop();
  }
  }
}
