#include<iostream>
using namespace std;

int tiling(int n)
{
  if(n==0 || n==1)
    return n;

  return tiling(n-1)+tiling(n-2);
}

int friendParing(int n)
{
  
  if(n==1 || n==0 || n==2)
    return n;
  
  return friendParing(n-1) + friendParing(n-2)*(n-1);
  
}


int knapsack(int value[], int wait[], int cap, int n)
{
  if(n==0 || cap == 0)
    return 0;
  if(wait[n-1]>cap)
    return 0;
 return max( knapsack(value,wait,cap-wait[n-1],n-1)+value[n-1],knapsack(value,wait,cap,n-1));
}


int main()
{
  int n,cap;
  cin>>n>>cap;
  int arrV[n];
  int arrW[n];
  for(int i=0; i<n; i++)
    cin>>arrV[i];
  for(int i=0; i<n; i++)
    cin>>arrW[i];
  // cout<<tiling(n)<<endl;
  // cout<<friendParing(n)<<endl;
  cout<<knapsack(arrV,arrW,cap,n)<<endl;
  
}