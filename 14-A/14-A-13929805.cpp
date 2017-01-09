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
#define MOD 1000000007
#define LL long long
using namespace std;

int n, m, xmin, ymin, xmax, ymax;
char ary[51][51];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
xmin = 1e9, ymin = 1e9;
xmax = -1, ymax = -1;
for(int i = 0; i < n; i++)
  for(int j = 0; j < m; j++)
  {
    cin>>ary[i][j];
    if(ary[i][j] == '*')
      xmin = min(xmin, i), ymin = min(ymin, j), xmax = max(xmax, i), ymax = max(ymax, j);
  }
//cout<<xmin<<" "<<ymin<<" "<<xmax<<" "<<ymax<<endl;
for(int i = xmin; i <= xmax; i++)
{
  for(int j = ymin; j <= ymax; j++)
    cout<<ary[i][j];
  cout<<endl;
}


return 0;}