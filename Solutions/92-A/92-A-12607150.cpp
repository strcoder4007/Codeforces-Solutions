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

int n, m, req, ans;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>m;
  req = n*(n+1)/2;
  ans = m%req;
  for(int i = 1; i <= n; i++)
  {
    if(ans-i < 0)
    {
      cout<<ans<<endl;
      return 0;
    }
    else
      ans -= i;
  }

  return 0;
}