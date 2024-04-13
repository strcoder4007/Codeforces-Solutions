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

long n, s, x, y, pops, totpops;
vector<pair<float, int> >myvec;
float dist;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cout<<fixed;
cin>>n>>s;
for(int i = 0; i < n; i++)
{
  cin>>x>>y>>pops;
  dist = sqrt(x*x+y*y);
  myvec.pb(mp(dist, pops));
  totpops += pops;
}
if(totpops+s < 1000000)
  cout<<-1<<endl;
else
{
  sort(myvec.begin(), myvec.end());
  int idx = 0;
  while(s < 1000000)
    s += myvec[idx].S, ++idx;
  cout<<setprecision(8)<<myvec[idx-1].F<<endl;
}

return 0;}