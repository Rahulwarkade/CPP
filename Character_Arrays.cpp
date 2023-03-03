#include<bits/stdc++.h>
using namespace std;
int main()
{// ACCESSING INDEX IN CHARACTER ARRAY
  // char array[190];
  // cin>>array;
  // cout<<array[3]<<endl;
  
  // CHEK PALINDROME
  // int n;
  // cin>>n;
  // char array[n+1];
  // cin>>array;
  // bool check = 1;
  // for(int i=0; i<n; i++)
  //   {
  //     if(array[i]!=array[n-1-i])
  //     {
  //       check = 0;
  //       break;
  //     }
  //   }
  // (check)?cout<<"palindrome "<<endl:cout<<"not a palindrome "<<endl;

  // LARGEST WORD IN SENTENCE
  int n; 
  cin>>n;
  cin.ignore();
  char array[n+1];
  
  cin.getline(array,n);
  cin.ignore();

  int i=0; 
  int currLenth =0, maxLenth =0;
  int st =0; int maxSt=0;
  while(1)
    {
      if(array[i]==' ' || array[i]=='\0')
      {
        if(currLenth>maxLenth)
        {
          maxLenth = currLenth;
          maxSt = st;
        }
        currLenth=0;
        st = i+1;
      }
      else
      currLenth++;
      if(array[i]=='\0')
        break;
      i++;
    }
  cout<<maxLenth<<endl;
  for(int i=0; i<maxLenth; i++)
    {
      cout<<array[i+maxSt];
    }
  cout<<endl;
}