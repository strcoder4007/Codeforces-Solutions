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

int n, k, ans;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
k = 1;
while(k < n)
{
  k <<= 1;
}
if(k > n)
  k >>= 1;
while(n >= k && n != 0)
{
  //cout<<n<<" "<<k<<endl;
  n -= k;
  k >>= 1;
  while(n < k)
    k >>= 1;
  ans++;
}
//cout<<"ans = "<<ans<<endl;
//cout<<n<<" "<<k<<endl;
if(n == 1 || n == 2)
  ++ans;
if(n == 3)
  ans += 2;
cout<<ans<<endl;

return 0;}