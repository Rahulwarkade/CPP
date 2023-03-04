#include<bits/stdc++.h>
using namespace std;
// int setBit(int n, int pos)
// {
//   return (n&(1<<pos));
// }
// int uniqueNum(int arr[],int n)
// {
//   int xorSum =0;
//   for(int i=0; i<n; i++)
//     {
//       xorSum = xorSum^arr[i];
//     }
//   return xorSum;
// }
// void twoUnique(int arr[],int n)
// {
//   int xorSum = 0;
//   for(int i=0; i<n; i++)
//     {
//       xorSum = xorSum^arr[i];
//     }
//   int tempXor = xorSum;
//   int setbit = 0;
//   int pos=0;
//   while(!setbit)
//     {
//       setbit = xorSum &1;
//       pos++;
//       xorSum = xorSum>>1;
//     }
//   pos--;
//   int newXor = 0;
//   for(int i=0; i<n; i++)
//     {
//       if(setBit(arr[i],pos))
//       {
//         newXor = newXor^arr[i];
//       }
//     }
//   cout<<newXor<<endl;
//   cout<<(newXor^tempXor)<<endl;
// }

int getBit( int n, int pos)
{
  return (n&(1<<pos));
}
int setBit(int n, int pos)
{
  return (n|(1<<pos));
}
int threeUnique(int arr[],int n)
{
  int result =0;
  for(int i=0; i<64; i++){
    int sum =0;
  for(int j=0; j<n; j++)
    {
      if(getBit(arr[j],i)){
        sum++;
      }
    }
    if(sum%3!=0)
    {
      result = setBit(result,i);
    }
  }
  return result;
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
    cin>>arr[i];
  // cout<<uniqueNum(arr, n)<<endl;
  // twoUnique(arr, n);
  cout<<threeUnique(arr,n)<<endl;
  
}