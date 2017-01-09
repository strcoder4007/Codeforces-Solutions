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
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;
using namespace std;

long n,k,ar[200000],cur,usd[200000];
int main() {
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);


cin>>n>>k;
ar[1]=k+1;
ar[2]=1;
usd[k+1]=1;

cur=1;
for (int i=2;i<=n*2;i++)
{
       while (usd[cur])++cur;
       ar[i]=cur;
       ++cur;
}

for (int i=1;i<=n*2;i++)
{
  if (i>1)cout<<" ";
    cout<<ar[i];
}
cout<<endl;

return 0;}