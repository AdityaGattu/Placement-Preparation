#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  //type your code
  stack<int> s;
  stack<int> s1;
  stack<int> s2;
  stack<int> s3;
  cout<<"Before maximizing:\n";
  while(1)
  {
    int x;
    cin>>x;
    if(x<0){break;}
    s1.push(x);
    if(s.empty()){s.push(x);}
    else
    {
      s.push(max(s1.top(),s.top()));
    }
  }
  
  while(!s1.empty())
  {
    cout<<s1.top()<<" ";
    s1.pop();
  }
  cout<<"\nAfter maximizing:\n";

    
  while(!s.empty())
  {
    s3.push(s.top());
    s.pop();
  }
   while(!s3.empty())
  {
    cout<<s3.top()<<" ";
    s3.pop();
  }
  
 
  
  return 0;
}
