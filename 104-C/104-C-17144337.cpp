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

int n, m, visited[110], u, v;
bool error;
vector<int>adj[110];


void dfs(int x)
{
    visited[x] = 1;
    for(int i = 0; i < adj[x].size(); i++)
        if(!visited[adj[x][i]])
            dfs(adj[x][i]);
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 0; i < m; i++)
{
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}
dfs(1);
for(int i = 1; i <= n; i++)
    if(!visited[i])
        error = true;
if(error || n!= m)
    cout<<"NO"<<endl;
else
    cout<<"FHTAGN!"<<endl;



return 0;}