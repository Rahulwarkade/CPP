#include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<algorithm>
using namespace std;
int main()
{
  // UPPER CASE AND LOWER CASE CONVERTER
  // string str;
  // getline(cin,str);
  string s;
  getline(cin,s);
  for(int i=0; i<str.size(); i++)
    {
      str[i] += 32;
    }
  cout<<str<<endl;
  for(int i=0; i<str.size(); i++)
    {
      str[i] -= 32;
    }
  cout<<str<<endl;
  // transform(str.begin(),str.end(),str.begin(), ::toupper);
  // cout<<str<<endl;
  // transform(str.begin(),str.end(),str.begin(), ::tolower);
  // cout<<str<<endl;

  // BIGGEST NUMBER
  string s = "2342345234";
  sort(s.begin(),s.end(),greater<char>());
  cout<<s<<endl;

  // FIND THE FREQUENCY OF ANY CHARACTER

  int freq[26];
  for(int i=0; i<26; i++)
    freq[i] =0;

  for(int i=0; i<s.length(); i++)
    {
      if(s.at(i)>='a' && s.at(i)<='z')
        freq[s[i]-'a']++;
    }
  char ans = 'a';
  int mxFre = 0;
  for(int i=0; i<26; i++)
    {
      if(freq[i]>mxFre)
      {
        mxFre = freq[i];
        ans = i+'a';
      }
    }
  cout<<mxFre<<" "<<ans<<endl;
}
