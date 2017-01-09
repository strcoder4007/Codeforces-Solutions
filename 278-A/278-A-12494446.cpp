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
typedef unsigned long long LL;

using namespace std;

LL n, s, t, ans, sum1, sum2;
int ary[101];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 0; i < n; i++)
    cin>>ary[i];
  cin>>s>>t;
  --s;--t;
  for(int i = s; i != t; i++)
  {
      sum1 += ary[i];
      if(i == n-1)
        i = -1;
  }
  for(int i = t; i != s; i++)
  {
    sum2 += ary[i];
    if(i == n-1)
      i = -1;
  }
  ans = min(sum1, sum2);
  cout<<ans<<endl;

}