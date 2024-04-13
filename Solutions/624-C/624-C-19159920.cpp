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
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, m, ary[510][510], color, visited[510];
vector<int>adj[510];

void dfs(int x, int color)
{
	visited[x] = color;
	for(int i = 1; i <= n; i++)
		if(!ary[x][i] && !visited[i])
			dfs(i, 4-color);
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
while(m--)
{
	int u, v;
	cin>>u>>v;
	adj[u].pb(v);
	adj[v].pb(u);
	ary[u][v] = ary[v][u] = 1;
}
for(int i = 1; i <= n; i++)
	ary[i][i] = 1;
for(int i = 1; i <= n; i++)
{
	if(!visited[i])
	{
		if(adj[i].size() == n-1)
		{
			visited[i] = 2;
			continue;
		}
		dfs(i, 1);
	}
}

for(int i = 1; i <= n; i++)
	for(int j = 1; j <= n; j++)
		if(ary[i][j] != (abs(visited[i]-visited[j]) < 2))
		{
			cout<<"No"<<endl;
			return 0;
		}
cout<<"Yes"<<endl;
for(int i = 1; i <= n; i++)
	cout<<char('a'+visited[i]-1);
cout<<endl;


return 0;}