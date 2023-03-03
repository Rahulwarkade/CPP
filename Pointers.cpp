#include<bits/stdc++.h>
using namespace std;
void increament(int *a);
void swap(int *a,int *b);
int main()
{
  // POINTERS
  // int p = 19;
  // int* ptr = &p;
  // cout<<ptr<<endl;//address of p
  // cout<<&p<<endl;//address of p
  // cout<<*ptr<<endl;// value of p
  // // POINTER TO POINTERS
  // int** ptr2 = &ptr;
  // cout<<**ptr2<<endl;
  // // POINTER IN ARRAYS
  // int array[] = {23,4,54};
  // cout<<*array<<endl;cout<<endl;
  // int* arrPtr = array;
  // for(int i=0; i<3; i++)
  //   {
  //     cout<<*arrPtr<<endl;
  //     cout<<*(array+i)<<endl;
  //     *arrPtr++;
  //   }
  // PASSING POINTER TO A FUNTION
  int a = 23;
  int b=34;
  int* aptr = &a;
  int* bptr = &b;
  // cout<<swap(a,b)
  cout<<a<<" "<<b<<endl;
  swap(&a,&b);
  cout<<a<<" "<<b<<endl;
  swap(aptr,bptr);
  cout<<a<<" "<<b<<endl;
  increament(&a);
  cout<<a<<endl;
}
void increament(int *a)
{
  *a++;
}
void swap(int *a,int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}