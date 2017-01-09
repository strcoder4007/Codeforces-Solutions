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

int n, ary[100010], idx, cnt;
bool flag;
vector<pair<int, int> >myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
  cin>>ary[i];
ary[n] = 2147000000;
int init = ary[0];
int minn = ary[0];
int maxx = ary[0];
for(int i = 1; i <= n; i++)
{
  if(ary[i] >= maxx)
  {
    myvec.pb(mp(minn, maxx));
    ++cnt, init = ary[i];
    minn = ary[i];
    maxx = ary[i];
  }
  else
    minn = min(minn, ary[i]), maxx = max(maxx, ary[i]);
}
/*
for(int i = 1; i < myvec.size(); i++)
  if(myvec[i].F < myvec[i-1].S)
    myvec[i-1].F = min(myvec[i].F, myvec[i-1].F);
    myvec[i].S = max(myvec[i].S, myvec[i-1].S);
    myvec[i-1].S = myvec[i-1].F;
    myvec[i].F = myvec[i].S;
    --cnt;

for(int i = 0; i < myvec.size(); i++)
  cout<<myvec[i].F<<" "<<myvec[i].S<<endl;
  */
for(int i = myvec.size()-1; i > 0; i--)
{
  int temp = myvec[i].F;
  while(temp < myvec[i-1].S && i > 0)
  {
    temp = min(temp, myvec[i-1].F);
    --i, --cnt;
  }
  myvec[i].F = temp;
}
cout<<cnt<<endl;

return 0;}