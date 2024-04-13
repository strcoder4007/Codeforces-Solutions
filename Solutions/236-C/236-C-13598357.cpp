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
LL ans, lcm, lcm2;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(LL i = n-100; i <= n; i++)
  for(LL j = n-100; j <= n; j++)
    for(LL k = n-100; k <= n; k++)
      if(i > 0 &&j > 0 && k > 0)
      {
        lcm = (i*j)/__gcd(i, j);
        lcm2 = (k*lcm)/__gcd(k, lcm);
        ans = max(ans, lcm2);
      }
cout<<ans<<endl;

return 0;}