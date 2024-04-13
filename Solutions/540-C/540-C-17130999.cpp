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


int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m, visited[510][510], u, v, times;
pair<int, int> start, dest;
bool found, path;
char ary[510][510];

int dist(pair<int, int> a, pair<int, int> b)
{
    int xx = abs(a.F-b.F) + abs(a.S-b.S);
    return xx;
}

bool pass(int a, int b)
{
    if(dest == mp(a, b))
        return true;
    if(a >= 1 && a <= n && b >= 1 && b <= m && ary[a][b] == '.')
        return true;
    return false;
}

void dfs(pair<int, int> node)
{
    visited[node.F][node.S] = 1;
    if(node == dest)
        path = true;
    for(int i = 0; i < 4; i++)
        if(!visited[node.F+dx[i]][node.S+dy[i]] && pass(node.F+dx[i], node.S+dy[i]))
            dfs(mp(node.F+dx[i], node.S+dy[i]));
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        cin>>ary[i][j];

cin>>u>>v;
start = mp(u, v);
cin>>u>>v;
dest = mp(u, v);
if(start == dest)
{
    for(int i = 0; i < 4; i++)
        if(ary[start.F+dx[i]][start.S+dy[i]] == '.')
            found = true;
}
else if(dist(start, dest) == 1)
{
    if(ary[dest.F][dest.S] == 'X')
        found = true;
    else
    {
        for(int i = 0; i < 4; i++)
            if(ary[dest.F+dx[i]][dest.S+dy[i]] == '.')
                found = true;
    }
}
else if(dist(start, dest) > 1)
{
    dfs(start);
    if(path)
    {
        for(int i = 0; i < 4; i++)
            if(ary[dest.F+dx[i]][dest.S+dy[i]] == '.')
                ++times;
        if((ary[dest.F][dest.S] == 'X' && times >= 1) || (ary[dest.F][dest.S] == '.' && times >= 2))
            found = true;
    }
}
if(found)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;



return 0;}