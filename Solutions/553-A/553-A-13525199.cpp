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

int n;
long long sum, ans;
int found[1005][1005];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

for(int i = 0; i <= 1001; i++)
{
  found[i][i] = 1;
  found[i][0] = 1;
  for(int j = i-1; j > 0; j--)
    found[i][j] = (found[i-1][j]+found[i-1][j-1])%MOD;
}


cin>>n;
ans = 1;
for(int i = 0; i < n; i++)
{
  int xs; cin>>xs;
  sum += xs;
  if(i != 0)
    ans = (ans*found[sum-1][xs-1])%MOD;
}
cout<<ans<<endl;

return 0;}