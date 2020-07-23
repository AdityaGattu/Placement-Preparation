#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  //type your code
  string s;
  cin>>s;
  stack<char> s1;
  int f=0;
  for(int i=0;i<s.length();i++)
  {
    if( (s1.empty() && s[i]==')') || (s1.empty() && s[i]=='}') || (s1.empty() && s[i]==']'))
    {
      f=1;break;
    }
    else if(s[i]=='(' || s[i]== '{' || s[i]=='[')
    {
      s1.push(s[i]);
    }
    if(!s1.empty() && s[i]==')')
    {
      if(s1.top()=='(')
      {s1.pop();continue;}
      else{f=1;break;}
    }
    
    
    if(!s1.empty() && s[i]=='}')
    {
      if(s1.top()=='{')
      {s1.pop();continue;}
      else{f=1;break;}
    }
    
    if(!s1.empty() && s[i]==']')
    {
      if(s1.top()=='[')
      {s1.pop();continue;}
      else{f=1;break;}
    }
  }
  if(f==1){cout<<"Not Balanced";}
  else{cout<<"Balanced";}
  return 0;
}
