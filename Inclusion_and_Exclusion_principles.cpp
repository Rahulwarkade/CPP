#include<bits/stdc++.h>
using namespace std;

int divisible(int n, int a,int b)
{
int c1 = n/a;
int c2 = n/b;
  int c3 = n/(a*b);
  return c1+c2-c3;
}
int gcd(int a,int b)
{
  int rem;
  while(b)
    {
      rem = a%b;
      a = b;
      b=rem;
    }
  return a;
}
int main()
{
  // int n,a,b;
  // cin>>n>>a>>b;
  // cout<<divisible(n,a,b)<<endl;
  // Eclid algorith to find greates common divisor
  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b);
}