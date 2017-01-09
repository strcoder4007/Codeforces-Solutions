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
#include <climits>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

#define INF 20000000000ll

long long n,m,qq,c,s,a,b;
pair<long long, long long> p;
set<long long> bd[120000];
long long v,e;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("subseq.out","w",stdout);
ios_base::sync_with_stdio(0);


cin>>n>>m;

vector <vector <pair<long long, long long> > > g(n);

for (int i=1;i<=m;i++)
{
    cin>>a>>b>>c;
    --a;--b;
    p=make_pair(a,c);g[b].push_back(p);
    p=make_pair(b,c);g[a].push_back(p);
   // cout<<a<<" "<<b<<"    "<<c<<endl;
}

vector<long long> d(n,INF);
s=0;
d[0]=0;

set<pair<long long, long long> > q;

for (int i=1;i<=n;i++)
{
   long long pp;
    cin>>pp;
    for (int j=1;j<=pp;j++)
    {cin>>qq;bd[i-1].insert(qq);}
}

q.insert(make_pair(d[s],s));
while (!q.empty())
{
      v=q.begin()->second;
      e=q.begin()->first;

      q.erase(q.begin());

      while (bd[v].find(e)!=bd[v].end())
      ++e;

      for (int j=0; j<g[v].size(); ++j) {
            int to = g[v][j].first,
                len = g[v][j].second;
            if (e + len < d[to]) {
                //q.erase (make_pair (d[to], to));
                d[to] = e + len;
                q.insert (make_pair (d[to], to));
            }
        }
}

//for (int i=0;i<n;i++)
//cout<<i<<"  "<<d[i]<<endl;

if (d[n-1]>10000000000ll)d[n-1]=-1;

cout<<d[n-1]<<endl;

cin.get();cin.get();
return 0;}