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
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>
#include <iomanip>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
#define have wghwiejojgoejfoejfast
using namespace std;

int n, m, visited[110], idx;
vector<int>path, adj[100], newvec;
vector<vector<int> >myvec;

void dfs(int x)
{
    visited[x] = 1;
    path.pb(x);
    for(int i = 0; i < adj[x].size(); i++)
        if(!visited[adj[x][i]])
            dfs(adj[x][i]);
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
while(m--)
{
    int u, v; cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}
for(int i = 1; i <= n; i++)
    if(!visited[i])
    {
        path.clear();
        dfs(i);
        if(path.size() == 1)
            newvec.pb(path[0]);
        else if(path.size() == 2)
            path.pb(0), myvec.pb(path);
        else if(path.size() == 3)
            myvec.pb(path);
        else
        {
            cout<<-1<<endl;
            return 0;
        }
    }


for(int i = 1; i <= n; i++)
    if(!visited[i])
        newvec.pb(i);

if(myvec.size() > n/3)
{
    cout<<-1<<endl;
    return 0;
}
for(int i = 0; i < myvec.size(); i++)
{
    for(int j = 0; j < myvec[i].size(); j++)
        if(myvec[i][j] == 0)
        {
            myvec[i][j] = newvec[idx];
            newvec[idx] = -1;
            ++idx;
        }
}
for(int i = 0; i < myvec.size(); i++)
{
    for(int j = 0; j < myvec[i].size(); j++)
        cout<<myvec[i][j]<<" ";
    cout<<endl;
}
for(int i = 0; i < newvec.size(); i++)
{
    int counter = 0;
    if(newvec[i] > 0)
    {
        cout<<newvec[i]<<" ";
        ++counter;
    }
    if(counter == 3)
        cout<<endl;
}


return 0;}