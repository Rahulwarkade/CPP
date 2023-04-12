#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  // different way of taking input
   string str;
   cin>>str;
   cin.ignore();
  cout<<str;
  string s = "rahul kumar warkade warkade warkade";
  cout<<s<<endl;
  string s2(5,'n');
  cout<<s2<<endl;
  string abc(str);
  // cout<<abc<<endl;
  // // taking input using getline function
  // string space;
  // getline(cin,space);
  // // cin.ignore();
  // cout<<space<<endl;

  // different function of strings
  // 1 append()
  string ap;
  getline(cin,ap);
  // cin.ignore();
  // cout<<ap.append(" is very smart boy ")<<endl;
  //  anoter way to to do this
//   string s2 = " adding adding";
//   ap +=s2;
//   cout<<ap<<endl;

  // 2. assing()
  // string st = "nincompoop";
  // st.assign(ap);
  // cout<<st<<endl;

  // 3. at()
  string str = "nincompoop";
  cout<<str.at(4)<<endl;
  cout<<str[str.length()-1]<<endl;
  // 4 begin()
  // cout<<str<<endl;

  // 5 clear()
   str.clear();
  // (str=="")?cout<<"string is empty":cout<<"string is not empty"<<endl; 

  // 6 compare()
  string s1 = "abc",s2 = "xyz";
  cout<<s2.compare(s1)<<endl;
  s1 = "abc",s2="abc";
  cout<<s2.compare(s1)<<endl;
  s1 = "xyz",s2="abc";
  cout<<s2.compare(s1)<<endl;

  // 7 c- str()
 // 8 empty()
  // str.clear();
  // if(str.empty())
  //   cout<<"string is empty"<<endl;

  // 9 end()
   // str.end();

  // 10 erase()
  // cout<<str.erase(0,2)<<endl;
  // cout<<str<<endl;

  // 11 find()
  // cout<<str.find("poop")<<endl;

  // 12 insert()
  str.insert(2,"lol");
  cout<<str<<endl;
  // 13 length()
  cout<<str.length()<<endl;
  
  //14 stoic 
  string a = "234";
  int x = stoi(a);
  cout<<x+2<<endl;

  // 15 resize()

  str.resize(6);
  cout<<str<<endl;

  // 16 size()
  cout<<str.size()<<endl;
  // 17 substr()
  cout<<str.substr(0,3)<<endl;

  string sor = "xcmnzdsfka";
  cout<<sor<<endl;
  sort(sor.begin(),sor.end());
  cout<<sor<<endl;
}
