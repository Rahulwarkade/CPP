#include<iostream>
#include<vector>
using namespace std;
void countSort(int *arr,int n)
{
  int mx = arr[0];
  for(int i=1;  i<n; i++)
    {
      mx = max(mx,arr[i]);
    }
  // int count[mx] = {0};
  // int count[10] = {0};
  vector<int> count(10,0);
  // cout<<mx<<endl;
  // cout<<sizeof(count)/sizeof(count[0]);

  for(int i=0; i<n; i++)
      count[arr[i]]++;

  
  for(int i=1; i<=mx; i++)
    {
      count[i] += count[i-1];
    }

  
  int orignal[n] ;
  for(int i=n-1; i>=0; i--)
    {
      orignal[--count[arr[i]]] = arr[i];
    }

  for(int i=0; i<n; i++)
    arr[i] = orignal[i];

  
  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

  
  cout<<endl;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
    cin>>arr[i];

  countSort(arr,n);
  return 0;
}