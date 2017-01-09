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

int visited[100010], a[100010], b[100010], n, m, found;
vector<int> adj[100010], ans[100010];

void dfs(int v, int c)
{
	visited[v] = c;
	for(int i = 0; i < adj[v].size(); i++)
	{
		int to = adj[v][i];
		if(visited[to])
		{
			if(visited[to] == visited[v])
				found = 1;
			continue;
		}
		dfs(to, 3 - c);
	}
}


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for (int i = 1; i <= m; i++)
{
	cin >>a[i]>>b[i];
	adj[a[i]].push_back(b[i]);
	adj[b[i]].push_back(a[i]);
}

for (int i = 1; i <= n; i++)
{
	if (visited[i])
		continue;
	dfs(i, 1);
}

if(found)
	cout << -1 << endl;
else
{
	for (int i = 1; i <= n; i++)
		ans[visited[i]].push_back(i);

	cout<< ans[1].size() << endl;
	for (int i = 0; i < ans[1].size(); i++)
		cout<<ans[1][i]<<" ";
	cout<<endl;
	cout<<ans[2].size()<<endl;
	for (int i = 0; i < ans[2].size(); i++)
		cout<<ans[2][i]<<" ";
	cout<<endl;
}

return 0;}