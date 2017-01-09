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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;

using namespace std;

vector<int>myvec;
int n, maxx, ary[101], found[1001], cnt;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  cin>>ary[i];
  ++found[ary[i]];
}
if(n == 2)
{
  if(ary[0] == ary[1])
  {
    cout<<"NO"<<endl;
    return 0;
  }
  else
  {
    cout<<"YES"<<endl;
    return 0;
  }
}
for(int i = 0; i <= 1000; i++)
{
  maxx = max(maxx, found[i]);
  if(found[i] != 0)
  {
    myvec.pb(i);
    ++cnt;
  }
}
if(cnt == 2 && abs(found[myvec[0]] - found[myvec[1]]) == 2)
{
  cout<<"NO"<<endl;
  return 0;
}

if(n == 1 || maxx <= n/2+1)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;

return 0;}