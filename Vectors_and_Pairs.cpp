// #include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool myCompare(pair<int,int> p,pair<int,int> p2)
{
  return p.first<p2.first;
}
int main()
{
  vector<int> v;
  v.push_back(2);
  v.push_back(7);
  v.push_back(3);

  for(int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";
  cout<<endl;

  vector<int>:: iterator it;
  for(it=v.begin(); it<v.end(); it++)
    cout<<*it<<" ";
  cout<<endl;

  for(auto element : v)
    cout<<element<<" ";
  cout<<endl;

  vector<int> v2(3);
  v2= v;
  for(auto element : v2)
    cout<<element<<" ";
  cout<<endl;
  v2.push_back(34);
  v2.push_back(24);
  v2.push_back(74);

  for(auto l : v2)
    cout<<l<<" ";
  cout<<endl;

  swap(v,v2);

  for(auto l : v)
    cout<<l<<" ";
  cout<<endl;

  for(auto l : v2)
    cout<<l<<" ";
  cout<<endl;
  
  sort(v.begin(),v.end());
  for(auto l :v)
    cout<<l<<" ";
  cout<<endl;


  int arr[] = {10,16,7,14,5,3,12,9};
cout<<endl;
  for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  vector<pair<int,int>> vp;
  for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
      // vp.push_back(make_pair(arr[i],i));
      pair<int,int> p;
      p.first = arr[i];
      p.second = i;
      vp.push_back(p);
    }

  sort(vp.begin(),vp.end(),myCompare);

  for(int i=0; i<vp.size(); i++)
    {
      arr[vp[i].second] = i;
    }

  cout<<endl;
  for(int i=0; i<vp.size(); i++)
    cout<<arr[i]<<"  ";
  cout<<endl;
}