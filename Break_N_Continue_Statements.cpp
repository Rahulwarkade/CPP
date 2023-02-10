#include<iostream>
using namespace std;
int main()
{
// 1. print all odd numbers till n.
      int n;
      cin>>n;
      for(int i=0; i<=n; i++)
        {
          if(i%2==0) continue;
          else cout<<i<<endl;
        }
// 2. check if a given number is prime or not.
      int p,i;
      cin>>p;
      for(i =2; i<p; i++)
        {
          if(p%i==0) break;
        }
      if(i==p) cout<<"prime"<<endl;
      else cout<<"not a prime"<<endl;
// 3. print all prime number in a given range.
      int a,/*i*/b,j;
      cin>>a>>b;
      for(i=a; i<=b; i++)
        {
          for(j =2; j<i; j++)
            {
              if(i%j==0) break;
            }
          if(j==i) cout<<i<<endl;
        }
}