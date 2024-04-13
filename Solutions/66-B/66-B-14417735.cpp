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

int n, ary[1001], init, lft, rht, cnt, ans;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
  cin>>ary[i];
for(int i = 1; i <= n; i++)
{
  cnt = 1, init = i, lft = i-1, rht = i+1;
  while(ary[rht] <= ary[init] && rht < n+1)
    ++rht, init = rht-1, ++cnt;
  init = i;
  while(ary[lft] <= ary[init] && lft > 0)
    --lft, init = lft+1, ++cnt;
  ans = max(ans, cnt);
}
cout<<ans<<endl;

return 0;}