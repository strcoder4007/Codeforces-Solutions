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

#define INF 1e18
long long n, m, dist[100002], cur;
vector<pair<long long , long long> >adj[100002];
map<long long, long long> mymap;

void dijkstra(long long x)
{
    set<pair<long long, long long> >myset;
    myset.insert(mp(0, x));
    dist[x] = 0;
    while(myset.size())
    {
        long long wht = (*myset.begin()).F, node = (*myset.begin()).S;
        myset.erase(myset.begin());
        for(long long i = 0; i < adj[node].size(); i++)
            if(dist[adj[node][i].F] > adj[node][i].S+wht)
                dist[adj[node][i].F] = adj[node][i].S+wht, myset.insert(mp(dist[adj[node][i].F], adj[node][i].F)), mymap[adj[node][i].F] = node;
    }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
    dist[i] = INF;
while(m--)
{
    int u, v, wt;
    cin>>u>>v>>wt;
    adj[u].pb(mp(v, wt));
    adj[v].pb(mp(u, wt));
}
dijkstra(n);
if(dist[1] == INF)
    cout<<-1<<endl;
else
{
    cur = 1;
    while(cur != n)
    {
        cout<<cur<<" ";
        cur = mymap[cur];
    }
    cout<<cur<<endl;
}



return 0;}