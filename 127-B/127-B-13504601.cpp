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

int n, ary[101], found[101], cnt, last, ans;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  cin>>ary[i];
  ++found[ary[i]];
}

for(int j = 0; j < n; j++)
{
  cnt = 0;
  for(int i = 0; i <= 100; i++)
    if(found[i] >= 2)
      found[i] -= 2, ++cnt, last = i;
  if(cnt&1)
    found[last] += 2;
  ans += cnt/2;
}
for(int i = 0; i <= 100; i++)
  if(found[i] >= 4)
    ans += found[i]/4, found[i] -= 4;
cout<<ans<<endl;

return 0;}