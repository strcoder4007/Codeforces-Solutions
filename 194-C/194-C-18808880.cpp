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

#define ignore sdfjg
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m, save, cnt, cc, visited[55][55];
char ary[55][55];
pair<int, int> start_node, ignore, alternate_start_node;

bool pass(int a, int b)
{
    if(a >= 1 && a <= n && b >= 1 && b <= m && !visited[a][b])
        return true;
    return false;
}

void dfs(int x, int y)
{
    if(mp(x, y) != ignore)
        visited[x][y] = 1, ++cnt;
    for(int i = 0; i < 4; i++)
        if(ary[x+dx[i]][y+dy[i]] == '#' && mp(x+dx[i], y+dy[i]) != ignore && pass(x+dx[i], y+dy[i]))
            dfs(x+dx[i], y+dy[i]);
}


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
    {
        cin>>ary[i][j];
        if(ary[i][j] == '#')
            ++save, start_node = mp(i, j);
    }
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        if(ary[i][j] == '#' && mp(i, j) != start_node)
            alternate_start_node = mp(i, j);
if(save <= 2)
{
    cout<<-1<<endl;
    return 0;
}
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
    {
        cc = 0;
        memset(visited, 0, sizeof visited);
        if(ary[i][j] == '#')
        {
            cnt = 0;
            ignore = mp(i, j);
            if(ignore == start_node)
                dfs(alternate_start_node.F, alternate_start_node.S);
            else
                dfs(start_node.F, start_node.S);
            if(cnt != save-1)
                ++cc;
        }
        if(cc)
        {
            cout<<1<<endl;
            return 0;
        }
    }

cout<<2<<endl;

return 0;}