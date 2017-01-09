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

int dx[] = {0, 0, 1, -1, 0, 0};
int dy[] = {0, 0, 0, 0, 1, -1};
int dz[] = {-1, 1, 0, 0, 0, 0};
int lay, n, m, visited[15][15][15], x1, y1, cnt;
char ary[15][15][15];

bool pass(int a, int b, int c)
{
    if(a >= 1 && a <= n && b >= 1 && b <= m && c >= 1 && c <= lay)
        return true;
    return false;
}

void dfs(int x, int y, int z)
{
    visited[x][y][z] = 1, ++cnt;
    for(int i = 0; i < 6; i++)
        if(!visited[x+dx[i]][y+dy[i]][z+dz[i]] && pass(x+dx[i], y+dy[i], z+dz[i]) && ary[x+dx[i]][y+dy[i]][z+dz[i]] == '.')
            dfs(x+dx[i], y+dy[i], z+dz[i]);
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>lay>>n>>m;
for(int k = 1; k <= lay; k++)
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin>>ary[i][j][k];
cin>>x1>>y1;
dfs(x1, y1, 1);
cout<<cnt<<endl;

return 0;}