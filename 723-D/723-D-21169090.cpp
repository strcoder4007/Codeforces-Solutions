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
using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m, k, visited[55][55], lake, ans;
bool ocean;
char ary[55][55];
vector<pair<int, int> >path;
vector<pair<int, vector< pair<int, int> > > >lakes;

bool pass(int a, int b)
{
    if(a >= 1 && a <= n && b >= 1 && b <= m && ary[a][b] == '.')
        return true;
    return false;
}

void dfs(int x, int y)
{
    visited[x][y] = 1;
    path.pb(mp(x, y));
    if(x == 1 || x == n || y == 1 || y == m)
        ocean = true;
    for(int i = 0; i < 4; i++)
        if(!visited[x+dx[i]][y+dy[i]] && pass(x+dx[i], y+dy[i]))
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
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        if(ary[i][j] == '.' && !visited[i][j])
        {
            ocean = false;
            path.clear();
            dfs(i, j);
            if(!ocean)
            {
                ++lake;
                lakes.pb(mp(path.size(), path));
            }
        }
lake -= k;
sort(lakes.begin(), lakes.end());
for(int i = 0; i < lakes.size(); i++)
{
    if(!lake)
        break;
    for(int j = 0; j < lakes[i].S.size(); j++)
    {
        int x = lakes[i].S[j].F, y = lakes[i].S[j].S;
        ary[x][y] = '*';
    }
    ans += lakes[i].F;
    --lake;
}

cout<<ans<<endl;
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= m; j++)
        cout<<ary[i][j];
    cout<<endl;
}



return 0;}