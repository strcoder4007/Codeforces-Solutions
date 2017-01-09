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

int n, m, found[4001][4001], degree[4001], ans;
vector<pair<int, int> > myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
ans = 1e9;
for(int i = 0; i < m; i++)
{
  int u, v;
  cin>>u>>v;
  found[u][v] = 1;
  found[v][u] = 1;
  myvec.pb(mp(u, v));
  ++degree[u];
  ++degree[v];
}
for(int i = 0; i < myvec.size(); i++)
  for(int j = 1; j <= n; j++)
    if(found[j][myvec[i].F] && found[myvec[i].S][j])
    ans = min(ans, degree[myvec[i].F]+degree[myvec[i].S]+degree[j]);
if(ans >= 1e9)
  cout<<-1<<endl;
else
  cout<<ans-6<<endl;


return 0;}