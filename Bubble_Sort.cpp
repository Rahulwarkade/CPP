#include<iostream>
using namespace std;
int main()
{
  int n; 
  cin>>n; 
  int array[n];
  for(int i=0; i<n; i++) cin>>array[i];
  int count=1;  
  while(count<n)
    {
      for(int i =0; i<n-count;i++)
        {
          if(array[i]>array[i+1])
          {
            int swap = array[i];
            array[i] = array[i+1];
            array[i+1] = swap;
          }
        }
      count++;
    }
    for(int i=0; i<n; i++) cout<<array[i]<<" ";
  cout<<endl;
}