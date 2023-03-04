#include<bits/stdc++.h>
using namespace std;
bool powerOf2(int n)
{
  return (n&&!(n&(n-1)));
}
int numberOfOnes(int n)
{
  int count=0;
  while(n)
    {
      n = (n&(n-1));
      count++;
    }
  return count;
}
void subSet(int arr[],int n)
{
  for(int i=0; i<(1<<n); i++)
    {
      for(int j=0; j<n; j++)
        {
          if((i&(1<<j)))
          {
            cout<<arr[j]<<" ";
          }
        }cout<<endl;
    }
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
    cin>>arr[i];
  // cout<<powerOf2(n)<<endl;
  // cout<<numberOfOnes(n)<<endl;
  subSet(arr,n);
}