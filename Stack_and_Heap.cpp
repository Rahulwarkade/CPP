#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a = 10; // stored in stack
  int* p = new int();// allocate memory in heap
  *p = 10;
  delete(p);// deallocate memory or dangling pointer
  p = new int[4];
  for(int i=0; i<4; i++)
    cin>>p[i];
  for(int i=0;i<4; i++)
    cout<<p[i]<<endl;
  delete[] p;
}