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
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

int n, m, k, ary[1001][1001], x, y, found1[1001], found2[1001];
char s;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>k;
for(int i = 1; i <= n; i++)
  for(int j = 1; j <= m; j++)
    cin>>ary[i][j];
for(int i = 1; i <= max(n, m); i++)
  found1[i] = found2[i] = i;
while(k--)
{
  cin>>s>>x>>y;
  if(s == 'c')
    swap(found2[x], found2[y]);
  else if(s == 'r')
    swap(found1[x], found1[y]);
  else
    cout<<ary[found1[x]][found2[y]]<<endl;
}

return 0;}