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
typedef unsigned long long LL;

using namespace std;

int n, l, r, diff, cnt, ary[1<<20];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>l>>r>>diff;
for(int i = 0; i < n; i++)
  cin>>ary[i];
for(int mask = 0; mask < (1<<n); mask++)
{
  int minn = 1e9;
  int maxx = -1e9;
  int sum = 0;
  for(int i = 0; i < n; i++)
  {
    if(mask&(1<<i))
    {
      minn = min(minn, ary[i]);
      maxx = max(maxx, ary[i]);
      sum += ary[i];
    }
  }
  if(sum >= l && sum <= r && maxx-minn >= diff)
    ++cnt;
}
cout<<cnt<<endl;

return 0;}