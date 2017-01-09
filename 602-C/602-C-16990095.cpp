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

int n, m, dist[410], found[410], u, v;
bool got;
vector<int>train[410], bus[410];

void bfs1(int x)
{
    queue<int>q;
    q.push(x);
    dist[x] = 0;
    while(q.size())
    {
        int node = q.front();
        q.pop();
        for(int i = 0; i < train[node].size(); i++)
            if(dist[train[node][i]] > dist[node]+1)
                dist[train[node][i]] = dist[node]+1, q.push(train[node][i]);
    }
}

void bfs2(int x)
{
    queue<int>q;
    q.push(x);
    dist[x] = 0;
    while(q.size())
    {
        int node = q.front();
        q.pop();
        for(int i = 0; i < bus[node].size(); i++)
            if(dist[bus[node][i]] > dist[node]+1)
                dist[bus[node][i]] = dist[node]+1, q.push(bus[node][i]);
    }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);


cin>>n>>m;
for(int i = 1; i <= n; i++)
    dist[i] = INT_MAX;
while(m--)
{
    cin>>u>>v;
    train[u].pb(v);
    train[v].pb(u);
}
for(int i = 1; i <= n; i++)
{
    memset(found, 0, sizeof found);
    for(int j = 0; j < train[i].size(); j++)
        ++found[train[i][j]];
    for(int j = 1; j <= n; j++)
        if(!found[j] && j != i)
            bus[i].pb(j);
}
for(int i = 0; i < train[1].size(); i++)
    if(train[1][i] == n)
        bfs2(1), got = true;
if(!got)
    bfs1(1);
    
if(dist[n] == INT_MAX)
    cout<<-1<<endl;
else
    cout<<dist[n]<<endl;

return 0;}