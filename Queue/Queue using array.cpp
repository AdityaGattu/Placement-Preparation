#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  //type your code
  queue<int>q;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    if(x<0)
    {break;}
    cout<<"Insert the element in queue :\n";
    q.push(x);
  }
  
  
  if(q.empty())
  {cout<<"Queue is empty";}
  else
  {
    cout<<"Queue elements are :\n";
  while(!q.empty())
  {
    
    cout<<q.front()<<" ";
    q.pop();
  }
  }
  
  return 0;
}
