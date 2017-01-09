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
#include <list>
#include <ctime>
#include <memory.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
typedef long long LL;

using namespace std;

int ans, n, m, cnt, leftn, leftm, cur;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>m;
  for(int i = 0; i <= n; i++)
  {
    cur = i;
    leftn = n-i;
    leftm = m-2*i;
    //cout<<leftn<<" "<<leftm<<" "<<cur<<endl;
    if(leftm >= 0)
    {
      cur += min(leftm, leftn/2);
      ans = max(ans, cur);
    }
  }
  cout<<ans<<endl;
  return 0;
}