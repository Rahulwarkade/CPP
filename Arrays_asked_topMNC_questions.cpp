#include<bits/stdc++.h>
using namespace std;
int main()
{
  // FIRST REPEATING ELEMENT
  
  int n; cin>>n; int array[n];
  for(int i=0; i<n; i++)cin>>array[i];
  int minidx = INT_MAX;
  const int N = 1e6;
  int check[N];
  for(int i=0; i<N; i++)check[i]=-1;
  for(int i=0; i<n; i++)
    {
      if(check[array[i]]!=-1)
      {
        minidx = min(minidx,check[array[i]]);
      }
      else
      {
        check[array[i]] = i;
      }
    }
  if(minidx==INT_MAX)
  {
    cout<<"-1"<<endl;
  }
  else
  {
    cout<<minidx+1<<endl;
  

  // // SUBARRAY WITH GIVEN SUM
  int n,s; cin>>n;cin>>s; int array[n];
  for(int i=0; i<n; i++) cin>>array[i];
  int st=0-1,en=-1,i=0,j=0,sum=0;
  // while(j<n && sum + array[j] <= s)
  //   {
  //     sum+=array[j];
  //     j++;
  //   }
  // if(sum==s)
  // {
  //   cout<<i+1<<" "<<j<<endl;
  //   return 0;
  // }
  while(j<n)
    {
      sum+=array[j];
      while(sum>s)
        {
          sum-=array[i];
          i++;
        }
      if(sum==s)
      {
        st = i+1;
        en=j+1;
        cout<<st<<" "<<en<<endl;
        break;
      }
      j++;
    }
  cout<<st<<" "<<en<<endl;

  // SMALLEST POSITIVE MISSING NUMBER
  int n; cin>>n; int array[n];
  for(int i=0; i<n; i++) cin>>array[i];
  const int N = 1e6;
  int check[N];
  int ans=-1;
  for(int i=0; i<n; i++) check[i]=0;
  for(int i=0; i<n; i++)
    {
      if(array[i]>0)
        check[array[i]] = 1;
    }
  for(int i=0; i<n; i++)
    {
      if(check[i] ==1)
      {
        ans = i+1;
      }
    }
  cout<<ans<<endl;
  return 0;
}
