#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  //type your code
  int n;
  cin>>n;
  stack<int> s1;
  stack<int> s2;
  for(int i=0;i<n;i++)
  {
    int y;
    cin>>y;
    if(i%2==1)
    {cout<<"Enter the value to be pushed in stack 2:\n";
     s2.push(y);}
     else
    {cout<<"Enter the value to be pushed in stack 1:\n";
       s1.push(y);}
  }
  
  cout<<"Stack 1:"<<"\n";
  while(!s1.empty())
  {
    cout<<s1.top()<<" ";
    s1.pop();
  }
  cout<<"\nStack 2:"<<"\n";
   while(!s2.empty())
  {
    cout<<s2.top()<<" ";
    s2.pop();
  }
  return 0;
}
