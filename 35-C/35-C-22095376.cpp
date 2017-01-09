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

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};

int n, m, k, maxx, dist[2010][2010];
pair<int, int> idx;

bool pass(pair<int, int> node)
{
    if(node.F >= 1 && node.F <= n && node.S >= 1 && node.S <= m)
        return true;
    return false;
}

void bfs(int x, int y)
{
    queue<pair<int, int> >q;
    q.push(mp(x, y));
    dist[x][y] = 0;
    while(q.size())
    {
        pair<int, int> node = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            pair<int, int> next_node = mp(node.F+dx[i], node.S+dy[i]);
            if(dist[next_node.F][next_node.S] > dist[node.F][node.S]+1 && pass(next_node))
            {
                dist[next_node.F][next_node.S] = dist[node.F][node.S]+1;
                q.push(next_node);
            }
        }
    }
}

int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>k;

for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        dist[i][j] = 10000000;

while(k--)
{
    int x, y; cin>>x>>y;
    bfs(x, y);
}

for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        if(dist[i][j] >= maxx)
            maxx = dist[i][j], idx = mp(i, j);
cout<<idx.F<<" "<<idx.S<<endl;


return 0;}