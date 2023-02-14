#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int Array[]={3, 4,2,23,5};
  for(int ind=0; ind<5; ind++)
    {
      cout<<Array[ind]<<endl;
    }
  int n;
  cin>>n;
  int array[n];
  for(int i=0; i<n; i++)
    {
      cin>>array[i];
    }
  for(int i=0; i<n; i++)
    {
      cout<<array[i]<<" ";
    }

  int n,maxNo = INT_MIN,minNo = INT_MAX;
  cin>>n;
  int maxNmin[n];
  for(int i=0; i<n; i++)
    {
      cin>>maxNmin[i];
    }
  for(int i=0; i<n; i++)
    {
      // if(maxNmin[i]>maxNo)
      //   maxNo = maxNmin[i];
      // if(maxNmin[i]<minNo)
      //  minNo = maxNmin[i];
      maxNo = max(maxNo,maxNmin[i]);
      minNo = min(minNo, maxNmin[i]);
    }
  for(int i=0; i<n; i++)
    cout<<maxNmin[i]<<"  ";
  cout<<endl;
  cout<<"min = "<<minNo<<"  max = "<<maxNo<<endl;
}