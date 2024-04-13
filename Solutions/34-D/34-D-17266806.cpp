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

int n, r1, r2, visited[100010], parent[100010];
vector<int>adj[100010];

void dfs(int x)
{
    visited[x] = 1;
    for(int i = 0; i < adj[x].size(); i++)
        if(!visited[adj[x][i]])
            parent[adj[x][i]] = x, dfs(adj[x][i]);
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>r1>>r2;
for(int i = 1; i <= n; i++)
    if(i != r1)
    {
        int xs; cin>>xs;
        adj[xs].pb(i);
        adj[i].pb(xs);
    }
dfs(r2);
for(int i = 1; i <= n; i++)
    if(i != r2)
        cout<<parent[i]<<" ";
cout<<endl;



return 0;}