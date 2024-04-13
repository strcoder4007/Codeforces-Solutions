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
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

int n, maxx, found[5001], ary[100010];
vector<int>myvec, newvec;
bool flag;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 1; i <= n; i++)
{
  cin>>ary[i];
  maxx = max(maxx, ary[i]);
}
sort(ary, ary+n);
for(int i = 1; i <= n; i++)
  ++found[ary[i]];

for(int i = 5000; i >= 1; i--)
  if(found[i] >= 2 && i != maxx)
  {
    myvec.pb(i);
    --found[i];
    flag = true;
  }
if(flag)
{
for(int i = 1; i <= 5000; i++)
  if(found[i] >= 1 && i != maxx)
    newvec.pb(i);
cout<<newvec.size()+1+myvec.size()<<endl;
for(int i = 0; i < newvec.size(); i++)
  cout<<newvec[i]<<" ";
cout<<maxx<<" ";
for(int i = 0; i < myvec.size(); i++)
  if(myvec[i] != maxx)
    cout<<myvec[i]<<" ";
cout<<endl;
}
else
{
  for(int i = 5000; i >= 1; i--)
    if(i != maxx && found[i] >= 1)
      newvec.pb(i);
  cout<<newvec.size()+1<<endl;
  cout<<maxx<<" ";
  for(int i = 0; i < newvec.size(); i++)
    cout<<newvec[i]<<" ";
  cout<<endl;
}

return 0;}