#include<iostream>
using namespace std;
int main()
{
//1 find the sum of natural numbers till n.
    int n,sum=0;
    cin>>n;
    for(int i=1; i<=n; i++)
      {
        sum = sum+i;
      }
    cout<<"sum = "<<sum<<endl;
//2 display multipilication up to 12.
    int mult;
    cin>>mult;
    for(int i =1; i<=12; i++)
      {
        cout<<mult*i<<endl;
      }
    int j =1;
    while(j<=12)
      {
        cout<<mult*j<<endl;
        j++;
      }
    j=1;
    do
      {
        cout<<mult*j<<endl;
        j++;
      }while(j<=12);
  //3 add only possitive number
  int number;
  cin>>number;
  sum =0;
  while(number>=0)
    {
      sum = sum+number;
      cin>>number;
    }
  cout<<"sum = "<<sum<<endl;
}