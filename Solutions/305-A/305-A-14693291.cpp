#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <iomanip>
#include <list>
#include <ctime>
#include <memory.h>
#include <bitset>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

long n,q;
vector<long> ans,v;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=0;i<n;i++)
{
  cin>>q;
  v.push_back(q);
}

sort(v.begin(),v.end());

for (int i=0;i<v.size();i++)
{
    if (v[i]==0)
      ans.push_back(v[i]);
    if (v[i]>0&&v[i]<10)
      if (ans.size()==0||ans[ans.size()-1]==0)
        ans.push_back(v[i]);
    if (v[i]>9&&v[i]<100&&v[i]%10==0)
      if (ans.size()==0||ans[ans.size()-1]<10)
        ans.push_back(v[i]);
    if (v[i]%10 != 0 && v[i] < 100 && v[i]>9)
      if (ans.size()==0||ans[ans.size()-1]==0)
        ans.push_back(v[i]);
    if (v[i]==100)
      ans.push_back(v[i]);
}
cout<<ans.size()<<endl;
for (int i=0;i<ans.size();i++)
  cout<<ans[i]<<" ";
cout<<endl;

cin.get();cin.get();
return 0;}