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

int n, visited[2010], dist[2010];
vector<int>adj[2010], myvec, jda[2010];
set<int>myset;

void topo(int x)
{
    visited[x] = 1;
    for(int i = 0; i < adj[x].size(); i++)
        if(!visited[adj[x][i]])
            topo(adj[x][i]);
    myvec.pb(x);
}
void bfs(int x)
{
    queue<int>q;
    q.push(x);
    while(q.size())
    {
        int node = q.front();
        q.pop();
        for(int i = 0; i < jda[node].size(); i++)
            if(dist[jda[node][i]] < dist[node]+1)
                dist[jda[node][i]] = dist[node]+1, q.push(jda[node][i]);
    }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
{
    int xs; cin>>xs;
    if(xs != -1)
        adj[i].pb(xs), jda[xs].pb(i);
}
for(int i = 1; i <= n; i++)
    if(!visited[i])
        topo(i);

for(int i = myvec.size()-1; i+1; i--)
    bfs(myvec[i]);

cout<<*max_element(dist+1, dist+n+1)+1<<endl;

return 0;}