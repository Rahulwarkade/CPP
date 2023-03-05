#include<bits/stdc++.h>
using namespace std;


bool sorted(int arr[],int n)
{
  if(n==1)
    return true;
return (arr[0]<arr[1] && sorted(arr+1,n-1));
}


void inc(int n)
{
  if(n==0)
    return;
  inc(n-1);
  cout<<n<<" ";
}


void dec(int n)
{
  if(n==0)
    return;
  cout<<n<<" ";
  dec(n-1);
}


int occ(int arr[],int i,int n,int key)
{
  if(n==0)
    return -1;
  if(key==arr[0])
    return i;
  return occ(arr+1,i+1,n-1,key);
}


int lastOcc(int arr[], int i, int n, int key)
{
  if(n==i)
    return -1;
  
// int ans = lastOcc(arr,i+1,n,key);
  
  if(lastOcc(arr,i+1,n,key)!=-1)
    return lastOcc(arr,i+1,n,key);
  
  if(key== arr[i])
    return i;    

  return -1;
}


int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;  i<n; i++)
    cin>>arr[i];

  // cout<<occ(arr,0,n,2)<<endl;
  cout<<lastOcc(arr,0,n,2)<<endl;
  // (sorted(arr,n))?cout<<"array is sorted "<<endl:cout<<"array is not sorted "<<endl;

  // inc(n);
  // cout<<endl;
  // dec(n);
}