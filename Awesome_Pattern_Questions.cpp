#include<iostream>
using namespace std;
int main()
{
// ractange pattern
  int row,col;
  cin>>row>>col;
  for(int i=1; i<=row; i++)
    {
      for(int j=1; j<=col; j++)
        {
          cout<<"* ";
        }cout<<endl;
    }
// hollow rectange pattern
  int ro,co;
  cin>>ro>>co;
  for(int i=1; i<=ro; i++)
    {
      for(int j=1; j<=co;j++)
        {
        if(i==1 || i==ro || j==1 || j==co)
        {
          cout<<"* ";
        }
        else{
          cout<<"  ";
        }
        }
      cout<<endl;
// inverted half pyramid
int n;
  cin>>n;
for(int i = n; i>=1; i--)
  {
    for(int j=1; j<=i; j++)
      {
        cout<<"* ";
      }
    cout<<endl;
  }

// half pyramid after 180 rotation
  int m; 
  cin>>m;
  for(int i=1; i<=m; i++)
    {
      for(int j=1; j<=m; j++)
        {
          if(j<=m-i)cout<<"  ";
          else cout<<"* ";
        }
      cout<<endl;
    }
// half pyramid using numbers
  int o;
  cin>>o;
  for(int i=1; i<=o; i++){
    for(int j=1; j<=i; j++)
      {
        cout<<i;
      }cout<<endl;
    }
// floyd's triangle
  int c,count=1;
  cin>>c;
  for(int i=1; i<=c; i++)
    {
      for(int j =1; j<=i; j++)
        {
          cout<<count<<" ";
          count++;
        }cout<<endl;
    }
// butterfly pattern
  int b;
  cin>>b;
  for(int i = 1; i<=b; i++)
    {
      for(int j =1; j<=i; j++)
        {
          cout<<"*";
        }
      int space = 2*b - 2*i;
      for(int j=1; j<= space; j++)
        {
          cout<<" ";
        }
      for(int j =1; j<=i; j++)
        {
          cout<<"*";
        }
  cout<<endl;
    }
  for(int i =b; i>=1; i--)
    {
      for(int j =1; j<=i; j++)
        {
          cout<<"*";
        }
      int space = 2*b - 2*i;
      for(int j=1; j<= space; j++)
        {
          cout<<" ";
        }
      for(int j =1; j<=i; j++)
        {
          cout<<"*";
        }
  cout<<endl;
    }
}
