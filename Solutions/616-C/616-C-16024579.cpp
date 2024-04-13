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

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n, m, save[1000010], visited[1010][1010], junk, cnt;
char ary[1010][1010];



bool pass(int x, int y)
{
    if(x >= 1 && x <= n && y >= 1 && y <= m && ary[x][y] == '.')
        return true;
    return false;
}

void dfs(int x, int y)
{
    visited[x][y] = junk;
    ++cnt;
    for(int i = 0; i < 4; i++)
        if(pass(x+dx[i], y+dy[i]) && !visited[x+dx[i]][y+dy[i]])
            dfs(x+dx[i], y+dy[i]);
}


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        cin>>ary[i][j];

for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        if(ary[i][j] == '.' && !visited[i][j])
        {
            ++junk;
            cnt = 0;
            dfs(i, j);
            save[junk] = cnt;
        }

for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= m; j++)
    {
        set<int>myset;
        if(ary[i][j] == '.')
        {
            cout<<'.';
            continue;
        }
        for(int k = 0; k < 4; k++)
            if(pass(i+dx[k], j+dy[k]))
                myset.insert(visited[i+dx[k]][j+dy[k]]);
        for(set<int>::iterator it = myset.begin(); it != myset.end(); it++)
            visited[i][j] += save[(*it)];
        cout<<(visited[i][j]+1)%10;
    }
    cout<<endl;
}


return 0;}