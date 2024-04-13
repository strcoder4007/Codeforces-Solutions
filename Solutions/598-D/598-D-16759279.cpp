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
int dy[] = {0, 0, -1, 1};
int n, m, k, ans, visited[1010][1010];
char ary[1010][1010];
vector<pair<int, int> >myvec;

bool pass(int a, int b)
{
    if(a > 0 && a <= n && b > 0 && b <= m)
        return true;
    return false;
}

void dfs(int x, int y)
{
    visited[x][y] = 1;
    myvec.pb(mp(x, y));
    for(int i = 0; i < 4; i++)
        if(ary[x+dx[i]][y+dy[i]] == '*')
            ++ans;
    for(int i = 0; i < 4; i++)
        if(!visited[x+dx[i]][y+dy[i]] && ary[x+dx[i]][y+dy[i]] == '.')
            dfs(x+dx[i], y+dy[i]);
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>k;
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        cin>>ary[i][j];
while(k--)
{
    int x, y; ans = 0, myvec.clear();
    cin>>x>>y;
    if(!visited[x][y])
    {
        dfs(x, y);
        for(int i = 0; i < myvec.size(); i++)
            visited[myvec[i].F][myvec[i].S] = ans;
    }
    else
        ans = visited[x][y];
    cout<<ans<<endl;
}
return 0;}