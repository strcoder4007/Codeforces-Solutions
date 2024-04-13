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

int n, len, fst, sec, end, pdt, dist[210], ans, visited[210];
vector<int>newvec, adj[210];
vector<pair<int, int> >myvec;
pair<int, int> cut;



pair<int, int> dfs(int x)
{
	int f = 0, n = x;
	visited[x] = 1;
	for (int i = 0; i < adj[x].size(); i++)
		if (mp(x, adj[x][i]) != cut && mp(adj[x][i], x) != cut && visited[adj[x][i]] == 0)
        {
			pair<int, int> r = dfs(adj[x][i]);
			if (r.first + 1 > f)
				f = r.first + 1, n = r.second;
		}
	return mp(f, n);
}


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i < n; i++)
{
    int u, v;
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
    myvec.pb(mp(u, v));
}

for(int i = 0; i < myvec.size(); i++)
{
    cut = myvec[i];
    pair<int, int> fst, sec;
    memset(visited, 0, sizeof visited);
    fst = dfs(cut.F);
    memset(visited, 0, sizeof visited);
    sec = dfs(fst.S);
    pdt = sec.F;
    memset(visited, 0, sizeof visited);
    fst = dfs(cut.S);
    memset(visited, 0, sizeof visited);
    sec = dfs(fst.S);
    pdt *= sec.F;
    ans = max(ans, pdt);
}
cout<<ans<<endl;

return 0;}