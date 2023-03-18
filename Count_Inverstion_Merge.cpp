#include<iostream>
using namespace std;

int merge(int *arr,int l,int mid,int r)
{
  int n1 = mid-l;
  int n2 = r-mid+1;
  int arr1[n1];
  int arr2[n2];
  int inv =0;
  for(int i=0; i<n1; i++)
      arr1[i] = arr[l+i];

  for(int i=0; i<n2; i++)
    arr2[i] = arr[mid+i];

  int i =0; 
  int j =0; 
  int k = l;

  while(i<n1 && j<n2)
    {
      if(arr1[i]>arr2[j])
      {
        arr[k] = arr1[i];
        k++,i++;
      }
      else
      {
        arr[k] = arr2[j];
        inv += n1-i;
        k++,j++;
      }
    }
  while(i<n1)
    {
      arr[k] = arr1[i];
      i++,k++;
    }
  while(i<n2)
    {
      arr[k] = arr2[j];
      j++,k++;
    }
  return inv;
}


int mergeSort(int *arr,int l,int r)
{
  int inv =0;
  int mid = (l+r)/2;
  while(l<r)
    {
      inv += mergeSort(arr,l,mid);
      inv += mergeSort(arr,mid+1,r);
      inv += merge(arr,l,mid,r);
    }
  return inv;
}

int main()
{
  int n;
  cin>>n;
  int arr[n]; 
  for(int i=0; i<n; i++)
      cin>>arr[i];
  cout<<mergeSort(arr,0,n)<<endl;
}