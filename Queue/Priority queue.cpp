#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  //type your code
  priority_queue<int> pq;
  
  int n;
  cout<<"Enter the number of values to be inserted:\n";
  cin>>n;
  int x;
  cout<<"Enter the values to be inserted in priority queue:\n";
  for(int i=0;i<n;i++)
  {
    cin>>x;
    pq.push(x);
  }
  
  cout<<"The priority queue elements are:\n";
  for(int i=0;i<n;i++)
  {
    cout<<pq.top()<<" ";
    pq.pop();
  }
  
  return 0;
}
