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

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
char ary[110][110], color;
int n, m, visited[110][110], found[30], cnt;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>color;
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        cin>>ary[i][j];
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
        if(ary[i][j] == color)
        {
            for(int k = 0; k < 4; k++)
                if(ary[i+dx[k]][j+dy[k]] != '.' && ary[i+dx[k]][j+dy[k]] != color && !visited[i+dx[k]][j+dy[k]] && !found[ary[i+dx[k]][j+dy[k]]-64] && i+dx[k] > 0 && i+dx[k] <= n && j+dy[k] > 0 && j+dy[k] <= m)
                    visited[i+dx[k]][j+dy[k]] = 1, ++cnt, found[ary[i+dx[k]][j+dy[k]]-64] = 1;
        }
cout<<cnt<<endl;


return 0;}