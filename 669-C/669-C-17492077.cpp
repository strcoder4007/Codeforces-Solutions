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

int n, m, q, type, ary[110][110];
pair<int, int> found[110][110];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>q;
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        found[i][j] = mp(i, j);
while(q--)
{
    cin>>type;
    if(type == 1)
    {
        int row; cin>>row;
        pair<int, int> save = found[row][1];
        for(int j = 1; j < m; j++)
            found[row][j] = found[row][j+1];
        found[row][m] = save;
    }
    else if(type == 2)
    {
        int col; cin>>col;
        pair<int, int> save = found[1][col];
        for(int i = 1; i < n; i++)
            found[i][col] = found[i+1][col];
        found[n][col] = save;
    }
    else
    {
        int x, y, wt;
        cin>>x>>y>>wt;
        int fst = found[x][y].F, sec = found[x][y].S;
        ary[fst][sec] = wt;
    }
}
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= m; j++)
        cout<<ary[i][j]<<" ";
    cout<<endl;
}


return 0;}