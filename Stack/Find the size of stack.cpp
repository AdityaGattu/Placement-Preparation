#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  //type your code
  
  stack<int> s;
  int cnt=0;
  while(1)
  {
    int x;
    cin>>x;
    if(x<0){break;}
    s.push(x);
    cnt++;
  }
  
  cout<<s.size()*8;
  
  return 0;
}
