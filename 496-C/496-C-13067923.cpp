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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define pow_seven 10000000
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;
using namespace std;

long n,m;
string st[1<<12];
long bad,done[1<<12];
long ans;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>m;
for (int i=1;i<=n;i++)
 cin>>st[i];
for (int j=0;j<m;j++)
{
 bad=0;
 for (int i=2;i<=n;i++) {
  if (done[i]==0&&st[i][j]<st[i-1][j])
   bad=1;
 }
 if (bad)++ans;
 else
 for (int i=2;i<=n;i++)
  if (st[i][j]>st[i-1][j])
   done[i]=1;
}
cout<<ans<<endl;

return 0;}