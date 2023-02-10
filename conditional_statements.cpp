#include<iostream>
using namespace std;
int main()
{
/*                     problems
1. check number is even or odd
*/
   cout<<"Enter a number"<<endl;
   int num;cin>>num;
   if(num%2 == 0) cout<<"even"<<endl;
   else  cout<<"odd"<<endl;

//2. minimum and maximum among two numbers
     int num1,num2;
     cout<<"Enter two number"<<endl;
     cin>>num1>>num2;
     // (num1>num2)?cout<<"max = "<<num1<<endl:cout<<"max = "<<num2;
     if(num1>num2)
     {
       cout<<"min = "<<num2<<endl;
     }
     else
     {
       cout<<"min = "<<num1<<endl;
     }
     int min,max,a,b;
     cin>>a>>b;
     if(a>b)
     {
       max = a;
       min = b;
     }
     else{
       max =b;
       min = a;
     }
     cout<<"max = "<<max<<endl;
     cout<<"min = "<<min<<endl;
  
// 3. find maximum among three numbers
     int x,y,z;
     cin>>x>>y>>z;
     if(x>y)
     {
       if(x>z) cout<<"max = "<<x<<endl;
       else cout<<"max = "<<z<<endl;
     }
     else
     {
       if(y>z)cout<<"max = "<<y<<endl;
       else cout<<"max = "<<z<<endl;
     }
// 4. check if triangle is scalene,isosceles and equilateral.
     int sidea,sideb,sidec;
     cout<<"Enter the side of trinangle "<<endl;
     cin>>sidea>>sideb>>sidec;
     if(sidea== sideb && sideb== sidec)cout<<"equilateral triangle"<<endl;
     else if (sidea==sideb || sidea == sidec || sideb== sidec) 
     cout<<"isosceles triangle"<<endl;
     else cout<<"scalene triangle"<<endl;
}