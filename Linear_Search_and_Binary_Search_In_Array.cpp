#include<iostream>
using namespace std;
int linearS(int array[], int size,int key)
{
  for(int i=0; i<size; i++)
    {
      if(array[i]==key) return i;
    }
  return 0;
}
int binaryS(int array[],int size, int key)
{
  int s =0; 
  int e = size-1;
  while(s<=e)
    {
        int mid = (s+e)/2;
  if(array[mid]==key)
    return mid;
  else if(array[mid]>key)
    e = mid-1;
  else
    s = mid+1;
  }
  return -1;
}
int main()
{
  int n,key;
  cin>>n;
  int array[n];
  cout<<"enter key "<<endl;
  cin>>key;
  for(int i=0; i<n; i++) cin>>array[i];
  // int re = linearS(array,n,key);
  // if(re)cout<<"key is found index = "<<re<<endl;
  // else cout<<"key is not found "<<endl;
  for(int i=0; i<n; i++) cout<<array[i];
  int ind = binaryS(array,n,key);
  cout<<array[ind]<<endl;
  cout<<ind<<endl;
}