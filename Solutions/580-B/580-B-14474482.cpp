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

int n, d, r;
long long sum, ans, maxx;
vector<pair<int, int> > myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>d;
for(int i = 0; i < n; i++)
{
  int m, s;
  cin>>m>>s;
  myvec.pb(mp(m, s));
}
sort(myvec.begin(), myvec.end());
r = -1;
for(int i = 0; i < myvec.size(); i++)
{
  while(r+1 < myvec.size() && abs(myvec[r+1].F-myvec[i].F) < d)
    ++r, sum += myvec[r].S;
  ans = max(ans, sum);
  sum -= myvec[i].S;
}
cout<<ans<<endl;

return 0;}