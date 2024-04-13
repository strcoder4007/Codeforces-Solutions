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

long long n, ary[500010], ans, need, sum, calc, cur;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
{
  cin>>ary[i];
    sum +=ary[i];
}
if(sum%3)
{
  cout<<0<<endl;
    return 0;
}
need = sum/3;
for(int i = 1; i <= n; i++)
{
    cur += ary[i];
    if(cur == 2*need && i < n)
      ans += calc;
    if(cur == need)
      ++calc;
}
cout<<ans<<endl;

return 0;}