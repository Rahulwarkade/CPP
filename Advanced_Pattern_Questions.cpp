#include<iostream>
using namespace std;
int main()
{
  // Inverted pattern
  int n;
  cin>>n;
  for(int  i=1; i<=n; i++)
    {
      for(int j=1; j<=n+1-i; j++)
        {
         cout<<j<<" ";
        }cout<<endl;
    }
// 0 -1 pattern
  int z;
  cin>>z;
  for(int i=1; i<=z; i++)
    {
      for(int j=1; j<=i; j++)
        {
          if((i+j)%2==0)cout<<" 1";
          else cout<<" 0";
        }cout<<endl;
    
// rhombus pattern 
      int r;
      cin>>r;
      for(int i=1; i<=r;  i++)
      {
        for(int j=1; j<=r-i; j++)
          {
            cout<<" ";
          }
        for(int j=1; j<=r; j++)
          {
            cout<<"* ";
          }cout<<endl;
      }
// number pattern
  int a;
  cin>>a;
  for(int i=1; i<=a; i++)
    {
      for(int j=1; j<=a-i; j++)
        {
          cout<<" ";
        }
      for(int j=1; j<=i; j++)
        {
          cout<<j<<" ";
        }cout<<endl;
    }

// palindromic pattern
  int p,j; 
  cin>>p;
  for(int i=1; i<=p; i++)
    {
      for(j=1; j<=p-i; j++)
        {
          cout<<"  ";
        }
      int k =i;
      for(; j<=p; j++)
        {
          cout<<k--<<" ";
        }
      k=2;
      for(; j<=p+i-1; j++)
        {
          cout<<k++<<" ";
        }cout<<endl;
    }
// star pattern
 int s;
  cin>>s;
  for(int i=1; i<=s; i++)
    {
      for(int j=1; j<=s-i; j++)
        {
          cout<<"  ";
        }
      for(int j=1; j<=2*i-1; j++)
        {
          cout<<"* ";
        }cout<<endl;
    }
  for(int i=s; i>=1; i--)
    {
      for(int j=1; j<=s-i; j++)
        {
          cout<<"  ";
        }
      for(int j=1; j<=2*i-1; j++)
        {
          cout<<"* ";
        }cout<<endl;
    

// zig-zag pattern
  int g;
  cin>>g;
  for(int i=1; i<=3; i++)
    {
      for(int j=1; j<=g; j++)
        {
          if((i+j)%4==0 || ((i==2)&(j%4==0)))
          {
            cout<<"* ";
          }
          else
          {
            cout<<"  ";
          }
        }
      cout<<endl;
    }
}