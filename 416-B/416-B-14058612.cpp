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

int n, m, ary[50001][6], ans[6][50001];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>m>>n;
for (int i=1;i<=m;i++)
for (int j=1;j<=n;j++)
cin>>ary[i][j];
for (int i=1;i<=n;i++)
 for (int j=1;j<=m;j++)
  ans[i][j]=max(ans[i-1][j],ans[i][j-1])+ary[j][i];
for (int i=1;i<=m;i++)
 cout<<ans[n][i]<<" ";
cout<<endl;

return 0;}