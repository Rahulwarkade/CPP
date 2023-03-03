#include<bits/stdc++.h>
using namespace std;
int kadane(int array[], int n);
bool pairSum(int array[], int n, int k);
bool bpairSum(int array[], int n, int k);
int main()
{
  // int n;cin>>n; int array[n];
  // for(int i=0; i<n; i++) cin>>array[i];
  // for(int i=0; i<n; i++)
  //   {
  //     for(int j=i; j<n; j++)
  //       {
  //         for(int k=i; k<=j; k++)
  //           {
  //             cout<<array[k]<<" ";
  //           }
  //          cout<<endl;
  //       }
  //   }

  // MAXIMUM SUM SUBARRAY
// int n; cin>>n;int array[n];int sum;int mxSum = INT_MIN;
// for(int i=0; i<n; i++) cin>>array[i];
//   for(int i=0; i<n; i++)
//     {
//       for(int j=i; j<n; j++)
//         {
//         sum=0;
//         for(int k=i; k<=j; k++)
//           {
//           sum+=array[k];
//           }
//           mxSum = max(mxSum, sum);
//         }
//     }
//   cout<<mxSum<<endl;

// BRUTE FORCE APPROACH
// int n; cin>>n; int array[n];int mxSum = INT_MIN; 
//   for(int i=0; i<n; i++) cin>> array[i];
//   int currSum[n+1];
//   currSum[0] =0;
//   for(int i=1; i<=n; i++)
//     currSum[i] = currSum[i-1]+array[i-1];
//   for(int i=1; i<=n; i++)
//     {int sum=0; 
//       for(int j=0;  j<i; j++)
//         {
//           sum = currSum[i]-currSum[j];
//           mxSum = max(mxSum,sum);
//         }
//     }
//   cout<<mxSum<<endl;

  // KADANE'S ALGORITHM
  // int n; cin>>n; int array[n];int mxSum = INT_MIN;
  // for(int i=0; i<n; i++) cin>>array[i];
  // int currSum = 0; 
  // for(int i=0; i<n; i++)
  //   {
  //     currSum += array[i];
  //     if(currSum<0)
  //     {
  //       currSum =0;
  //     }
  //     mxSum = max(currSum,mxSum);
  //   }
  // cout<<mxSum<<endl;

  // MAXIMUM SUM CIRCULAR SUBARRAY
  // int n; cin>>n; int array[n];
  // for(int i=0; i<n; i++) cin>>array[i];
  // int warpSum; 
  // int nonwarpSum;int totalSum=0;
  // warpSum = kadane(array,n);
  // for(int i=0; i<n; i++)
  //   {
  //     totalSum+=array[i];
  //     array[i] = -array[i];
  //   }
  // nonwarpSum = totalSum + kadane(array,n);
  // int mxSum = max(warpSum, nonwarpSum);
  // cout<<mxSum<<endl;

  // PAIRSUM
  int n; cin>>n;int k;cin>>k; int array[n]; for(int i=0; i<n; i++)cin>>array[i];
  // cout<<pairSum(array,n,k)<<endl;
  // optimized approach
  // constraints: array must be shorted;
  cout<<bpairSum(array,n,k)<<endl;
}
bool bpairSum(int array[], int n, int k)
{
  int l=0;
  int h=n-1; 
  int sum;
  while(l<h)
    {
      sum = array[l] + array[h];
      if(sum==k)
      {
        cout<<l<<" "<<h<<endl;
        return true;
      }
      else if(sum>k)
        h--;
      else
        l++;
    }
  return false;
}
bool pairSum(int array[], int n, int k)
{
  for(int i=0; i<n; i++)
    {
      for(int j=i+1; j<n; j++)
        {
          int sum = array[i]+array[j];
          if(sum==k)
          {
            cout<<i<<" "<<j<<endl;
            return true;
          }
        }
    }
  return false;
}
int kadane(int array[], int n)
{
  int sum=0;
  int mxSum = INT_MIN;
  for(int i=0; i<n; i++)
    {
      sum+=array[i];
      if(sum<0)
      {
        sum=0;
      }
      mxSum = max(mxSum,sum);
    }
  return mxSum;
}