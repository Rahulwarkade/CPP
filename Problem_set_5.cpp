#include<iostream>
using namespace std;
int main()
{
  // Checking for the prime number
  int n;
  cin>>n;
  bool flag;
  flag = true;
  for(int i=2; i<n; i++)
    {
      if(n%i==0)
        flag = false;
        break;
    }
  if(flag==true)
    cout<<"prime"<<endl;
  else
    cout<<"non-prime"<<endl;
  // write a program to prine all digits of decimal positive number from left to right.
  int m;
  cin>>m;
  while(m)
    {
      int rem = m%10;
      cout<<rem;
      m/=10;
    }
  // write a program to reverse a program a number
  int r;
  cin>>r;
  int reverse =0;
  while(r)
    {
      int lastDigit = r%10;
      reverse = reverse*10 + lastDigit;
      r/=10;
    }
  cout<<reverse<<endl;

  // write a promgram to check if a number is armstrog or not.
  int arm,sum=0;
  cin>>arm;
  int armstrong = arm;
  while(arm)
    {
      int lastDigit = arm%10;
      sum+= lastDigit*lastDigit*lastDigit;
      arm/=10;
    }
  if(armstrong==sum)
  {
    cout<<"This is an Armstrong number"<<endl;
  }
  else
  {
    cout<<"not an armstrong number"<<endl;
  }
  // calculating factorial of a number
  int f;
  cin>>f;
  int fact =1;
 for(int i=f; i>=1; i--)
   {
     fact*=i;
   }
  cout<<fact<<endl;

  // n term of fibonacci series
  int term,prev=0,curr=1;
  cin>>term;
  int series;
    if(term==1){
     cout<<"0,"; 
    }
      else if(term==2)
      {
        cout<<"0,1,";
      }
  else {
  cout<<"0,1,";
  for(int i=2; i<term; i++)
    {
      series = prev+curr;
      prev =curr;
      curr = series;
      cout<<series<<",";
    }
    }
  // ASCII value of given characater
  char ch;
  cin>>ch;
  int ascii;
  cout<<"ascii value is = "<<int(ch)<<endl;
  // chech vowel and constant
  if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u'||ch=='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U')
    cout<<"vowel"<<endl;
  else
    cout<<"constant"<<endl;

// find factor of any number
  int fac; 
  cin>>fac;
  for(int i=2; i<=fac; i++)
    {
      if(fac%i==0)
        cout<<i<<",";
    }
}
