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

int n, cnt, visited[1010][1010], found[1010][1010];
vector<pair<int, int> >myvec;
vector<pair<int, int> >graph[1010][1010];

void dfs(int x, int y)
{
    visited[x][y] = 1;
    for(int i = 0; i < graph[x][y].size(); i++)
        if(!visited[graph[x][y][i].F][graph[x][y][i].S])
            dfs(graph[x][y][i].F, graph[x][y][i].S);
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int x, y; cin>>x>>y;
    myvec.pb(mp(x, y));
    found[x][y] = 1;
}
for(int i = 0; i < myvec.size(); i++)
    for(int j = 0; j < myvec.size(); j++)
        if(i != j)
            if(myvec[i].F == myvec[j].F || myvec[i].S == myvec[j].S)
                graph[myvec[i].F][myvec[i].S].pb(mp(myvec[j].F, myvec[j].S)), graph[myvec[j].F][myvec[j].S].pb(mp(myvec[i].F, myvec[i].S));

for(int i = 1; i <= 1000; i++)
    for(int j = 1; j <= 1000; j++)
        if(!visited[i][j] && found[i][j])
            dfs(i, j), ++cnt;
cout<<cnt-1<<endl;

return 0;}