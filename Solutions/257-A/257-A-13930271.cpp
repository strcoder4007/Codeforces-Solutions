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
#define LL long long
using namespace std;

int n, m, k, ary[51], cnt, cur;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>k;
for(int i = 0; i < n; i++)
  cin>>ary[i];
sort(ary, ary+n, greater<int>());
cur = k;
if(m <= cur)
  cout<<0<<endl;
else
{
  --cur;
  for(int i = 0; i < n; i++)
  {
    if(m <= ary[i]+cur)
    {
      ++cnt;
      cout<<cnt<<endl;
      return 0;
    }
    else
      cur += ary[i], ++cnt, --cur;
  }
  if(m > cur)
    cout<<-1<<endl;
  else
    cout<<cnt<<endl;
}



return 0;}