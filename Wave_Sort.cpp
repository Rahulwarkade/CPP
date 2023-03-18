#include<iostream>
using namespace std;

void swap(int *arr,int i,int j)
{
  arr[i] = arr[i]^arr[j];
  arr[j] = arr[i]^arr[j];
  arr[i] = arr[i]^arr[j];
}

void dnfSort(int *arr,int n)
{
  int low =0,mid=0,high =n-1;
  while(mid<=high)
    {
      if(arr[mid]==0)
      {
        swap(arr,low,mid);
        low++,mid++;
      }
      else if (arr[mid] == 1)
      {
        mid++;
      }
      else
      {
        swap(arr,mid,high);
        high--;
      }
    }
}


int main()
{
  int arr[9] = {1,2,0,2,1,0,0,1,2};

  dnfSort(arr,9);
  
  for(int i=0; i<9; i++)
    {
      cout<<arr[i]<<" ";
    }cout<<endl;
}