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
#define MOD 1000000007
#define LL long long
using namespace std;

long long n, q, found[200010];
long long ans, init;
vector<long long> myvec, newvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>q;
for(int i = 1; i <= n; i++)
{
  int xs; cin>>xs;
  myvec.pb(xs);
}
sort(myvec.begin(), myvec.end());
for(int i = 0; i < q; i++)
{
  int l, r; cin>>l>>r;
  ++found[l], --found[r+1];
}
for(int i = 1; i <= n; i++)
  init += found[i], newvec.pb(init);
sort(newvec.begin(), newvec.end());
for(int i = 0; i < myvec.size(); i++)
  ans += myvec[i]*newvec[i];
cout<<ans<<endl;

return 0;}