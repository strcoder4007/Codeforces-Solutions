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
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;
using namespace std;

int n, idx, found[100010], ary[100010], maxx;
bool found_one, gotin;

int main() {
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0 ; i < n; i++)
{
  int xs; cin>>xs;
  if(found[xs] == 1)
    ary[i] = -1;
  else
  {
    ary[i] = xs;
    found[xs] = 1;
  }
  if(xs == 1)
    found_one = true;
}
idx = 1;
for(int i = 0; i < n; i++)
{
  if(ary[i] == -1 || ary[i] > n)
  {
    gotin = true;
    for(int j = idx; j <= n; j++)
      if(found[j] == 0)
      {
        ary[i] = j, idx = j+1;
        break;
      }
    }
}
maxx = max_element(ary, ary+n)-ary;
if(!found_one && !gotin)
  ary[maxx] = 1;
for(int i = 0; i< n; i++)
  cout<<ary[i]<<" ";
cout<<endl;

return 0;}