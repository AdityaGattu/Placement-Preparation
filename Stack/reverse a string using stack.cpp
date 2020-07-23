#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  //type your code
  string s;
  cin>>s;
  stack<char> stk;
  for(int i=0;i<s.length();i++)
  {
    stk.push(s[i]);
  }
  
  while(!stk.empty())
  {
    cout<<stk.top();
    stk.pop();
  }
  return 0;
}
