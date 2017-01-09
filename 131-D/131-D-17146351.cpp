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

long long n, dist[3010], visited[3010], path[3010];
queue<long long>q;
vector<long long>adj[3010];

void bfs()
{
    while(q.size())
    {
        long long node = q.front();
        q.pop();
        for(long long i = 0; i < adj[node].size(); i++)
            if(dist[adj[node][i]] > dist[node]+1)
                dist[adj[node][i]] = dist[node]+1, q.push(adj[node][i]);
    }
}

void cycle(long long x)
{
    dist[x] = 0;
    long long cur = path[x];
    while(cur != x)
        dist[cur] = 0, cur = path[cur];
}

void dfs(long long x, long long parent)
{
    visited[x] = 1;
    for(long long i = 0; i < adj[x].size(); i++)
    {
        if(adj[x][i] == parent)
            continue;
        if (visited[adj[x][i]]==1)
        {
            path[adj[x][i]] = x;
            cycle(adj[x][i]);
            return;
        }
        if (visited[adj[x][i]]==2)
           continue;
        path[adj[x][i]] = x;
        dfs(adj[x][i], x);
    }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(long long i = 0; i < n; i++)
{
    long long u, v;
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}

for(long long i = 1; i <= n; i++)
    dist[i] = INT_MAX;

dfs(1, -1);

for(long long i = 1; i <= n; i++)
    if(!dist[i])
        q.push(i);

bfs();

for(long long i = 1; i <= n; i++)
    cout<<dist[i]<<" ";
cout<<endl;


return 0;}