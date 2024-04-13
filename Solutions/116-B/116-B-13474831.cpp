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

int n, m, cnt;
char ary[12][12];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
  for(int j = 1; j <= m; j++)
    cin>>ary[i][j];
for(int i = 1; i <= n; i++)
  for(int j = 1; j <= m; j++)
    if(ary[i][j] == 'W')
      if(ary[i-1][j] == 'P' || ary[i+1][j] == 'P' || ary[i][j-1] == 'P' || ary[i][j+1] == 'P')
        ++cnt;
cout<<cnt<<endl;

return 0;}