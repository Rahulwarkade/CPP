#include<iostream>
using namespace std;
int main()
{
  int a; //declaration
  a = 24; // initialization
  float f = 23.23;
  char c = 'a';
  bool b;
  string s;
  cout<<sizeof(s)<<endl;
  double d = 2343433;
  cout<<"The size of int is = "<<sizeof(a)<<endl;
  cout<<"The size of float is = "<<sizeof(f)<<endl;
  cout<<"The size of char is = "<<sizeof(c)<<endl;
  cout<<"The size of bool is = "<<sizeof(b)<<endl;
  cout<<"The size of double is = "<<sizeof(d)<<endl;
  short int si = 2;
  long long int li = 23453453454;
  cout<<"The size of short int is = "<<sizeof(si)<<endl;
  cout<<"The size of long int is = "<<sizeof(li)<<endl;
}