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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
using namespace std;

int n, m, k, bad[501][501], found[501][501];
char ary[510][510];

void dfs(int a, int b)
{
  found[a][b] = 1;
  if(!found[a-1][b] && ary[a-1][b] == '.')
    dfs(a-1, b);
  if(!found[a][b+1] && ary[a][b+1] == '.')
    dfs(a, b+1);
  if(!found[a+1][b] && ary[a+1][b] == '.')
    dfs(a+1, b);
  if(!found[a][b-1] && ary[a][b-1] == '.')
    dfs(a, b-1);
  if(k > 0)
    bad[a][b] = 1, --k;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>m>>k;
for(int i = 1; i <= n; i++)
  for(int j = 1; j <= m; j++)
    cin>>ary[i][j];

for(int i = 1; i <= n; i++)
  for(int j = 1; j <= m; j++)
    if(ary[i][j] == '.' && !found[i][j])
      dfs(i, j);

for(int i = 1; i <= n; i++)
{
  for(int j = 1; j <= m; j++)
  {
    if(bad[i][j])
      cout<<'X';
    else
      cout<<ary[i][j];
  }
  cout<<endl;
}

return 0;}