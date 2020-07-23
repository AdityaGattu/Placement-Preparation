#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
  //type your code
  queue<int> q;
   
  while(1){
    int x;
    cin>>x;
    if(x<0){break;}
    q.push(x);
  }
  stack<int> s;
  
  if(q.empty()){cout<<"Queue is empty\n"; }
  
  else{
   cout<<"Before reversing:\n";
   while(!q.empty())
  {
     cout<<q.front()<<" ";
    s.push(q.front());
    q.pop();
  }
  cout<<"\nAfter reversing:\n";
  
  while(!s.empty())
  {
    cout<<s.top()<<" ";
    s.pop();
  }
  }
  
  
  return 0;
}
