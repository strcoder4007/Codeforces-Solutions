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

int n, v, a, b, vv, sum, q, rem[3005], ff, ss;
vector<pair<int, int> > myvec;
bool flag;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>v;
for(int i = 0; i < n; i++)
{
  cin>>a>>b;
  myvec.pb(mp(a, b));
}
sort(myvec.begin(), myvec.end());

for(int i = 0; i < 3005; i++)
  rem[i] = v;

for(int i = 0; i < n; i++)
{
  ff = myvec[i].F;
  ss = myvec[i].S;
  q = min(rem[ff], ss);
  ss -= q;
  rem[ff] -= q;
  sum += q;
  q = min(rem[ff+1], ss);
  sum += q;
  ss -= q;
  rem[ff+1] -= q;
}
cout<<sum<<endl;


return 0;}