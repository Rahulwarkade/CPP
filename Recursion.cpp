#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
  if(n==0)
    return 0;
  return n+sum(n-1);
}
int powerOf(int n,int p)
{
  if(p==0)
    return 1;
  return n*powerOf(n,p-1);
}
int fac( int n)
{
  if (n==0)
    return 1;
  return n*fac(n-1);
}
int fib(int n)
{
  if(n==0 || n==1)
    return n;
  return fib(n-1)+fib(n-2);
}
int main()
{
  // int n,p;
  // cin>>n>>p;
  // cout<<sum(n)<<endl;
  // cout<<powerOf(n,p)<<endl;
  int n;
  cin>>n;
  cout<<fac(n)<<endl;
  cout<<fib(n)<<endl;
  return 0;
}