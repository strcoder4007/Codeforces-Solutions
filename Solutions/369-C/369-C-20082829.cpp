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
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int visited[100010], n, subtree[100010], bad_road[100010];
vector<int>myvec;
vector<pair<int, int> >adj[100010];

void dfs(int x)
{
    visited[x] = 1;
	subtree[x] = bad_road[x];
    for(int i = 0; i < adj[x].size(); i++)
    {
        int to = adj[x][i].F;
        if(visited[to])
			continue;
        if(adj[x][i].S == 2)
			bad_road[to] = 1;
        dfs(to);
		subtree[x] += subtree[to];
    }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i < n; i++)
{
    int u, v, t;
    cin>>u>>v>>t;
    adj[u].pb(mp(v, t));
    adj[v].pb(mp(u, t));
}
dfs(1);
for(int i = 1; i <= n; i++)
	if(subtree[i] == 1 && bad_road[i] == 1)
		myvec.pb(i);
cout<<myvec.size()<<endl;
for(int i = 0; i < myvec.size(); i++)
    cout<<myvec[i]<<" ";
cout<<endl;

/*
for(int i = 1; i <= n; i++)
	cout<<i<<" ";
cout<<endl;
for(int i = 1; i <= n ;i++)
	cout<<subtree[i]<<" ";
cout<<endl;
for(int i = 1; i <= n; i++)
	cout<<tree[i]<<" ";
cout<<endl;
*/

return 0;}