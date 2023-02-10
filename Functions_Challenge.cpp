#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n)
{
  for(int i=2; i<sqrt(n); i++)
    {
      if(n%i==0)
        return false;
    }
  return true;
}
int fac(int n)
{
  int factorial = 1;
  for(int i=1; i<=n; i++)
    {
      factorial*=i;
    }
  return factorial;
}
void fib(int fi);
int main()
{
  int n;
  cin>>n;
 (isPrime(n))?cout<<"prime"<<endl:cout<<"non-prime"<<endl;
  int a,b;
  cin>>a>>b;
  for(int i=a; i<=b; i++)
    {
      (isPrime(i))?cout<<"prime = "<<i<<",":cout<<"non-prime = "<<i<<","<<endl;
    }
  int t;
  cin>>t;
  cout<<fac(t);

  int fi;
  cin>>fi;
  fib (fi);
  int m,r;
  cin>>m>>r;
  int ans = fac(m)/(fac(m-r)*fac(r));
  cout<<ans<<endl;

  int p;
  cin>>p;
  for(int i=0; i<=p; i++)
    {
      for(int j=0; j<=i; j++)
        {
          cout<<fac(i)/(fac(i-j)*fac(j))<<" ";
        }
      cout<<endl;
    }
}
void fib(int fi)
{
  int t1=0,t2=1,nextTerm;
  for(int i=1; i<=fi; i++)
    {
      cout<<t1<<",";
      nextTerm = t1+t2;
      t1 = t2;
      t2 = nextTerm;
    }
}
