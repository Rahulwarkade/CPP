#include<bits/stdc++.h>
using namespace std;
int main()
{
  // MAX TILL A[i]
  // int n,mx = INT_MIN;
  // cin>>n;
  // int array[n];
  // for(int i=0; i<n; i++) cin>>array[i];
  // for(int i=0; i<n; i++)
  //   {
  //   mx = max(mx,array[i]);
  //   cout<<mx<<" ";
  //   }
 // SUM OF ALL SUBARRAYS
  // int n,sum=0; 
  // cin>>n; 
  // int array[n];
  // for(int i=0; i<n; i++) cin>>array[i];
  // for(int i=0; i<n; i++)
  //   {
  //     for(int j=i; j<n; j++)
  //       {
  //         sum+=array[j];
  //         cout<<sum<<" ";
  //       }
  //     sum=0;
  //   }
  // LONGEST ARITHMETIC SUBARRAYS
  // int n; 
  // cin>>n;
  // int array[n];
  // for(int i=0; i<n; i++) cin>>array[i];
  // int pd = array[1]-array[0];
  // int ans = 0;
  // int curr =2;
  // for(int i = 2; i<n-1; i++)
  //   {
  //     if(pd == array[i]-array[i-1])
  //       curr++;
  //     else
  //     {
  //       pd = array[i]- array[i-1];
  //       curr = 2;
  //     }
  //     ans = max(ans,curr);
  //   }
  // cout<<ans<<endl;
  // NUMBER OF RECORD BREAKING DAYS
  int n,record=0;
  cin>>n; 
  int array[n];
  for(int i=0; i<n; i++) cin>>array[i];
  int mx = INT_MIN;
  if(n==1)
  {
    cout<<'1'<<endl;
    return 0;
  }
  for(int i=0; i<n ; i++)
    {
      if(array[i]>mx && array[i]>array[i+1])
      {
        record++;
      }
      mx = max(mx,array[i]);
    }cout<<record<<endl;
}