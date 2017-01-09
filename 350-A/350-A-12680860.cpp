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

int n, m, ary1maxx, ary2minn, ary1minn, ans, extra;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  ary1minn = 101;
  ary1maxx = -1;
  ary2minn = 101;
  cin>>n>>m;
  for(int i  = 0; i < n; i++)
  {
    int xs; cin>>xs;
    ary1maxx = max(xs, ary1maxx);
    ary1minn = min(xs, ary1minn);
  }
  for(int i = 0; i < m; i++)
  {
    int xs; cin>>xs;
    ary2minn = min(xs, ary2minn);
  }
  if(ary1minn == ary1maxx)
  {
    if(2*ary1minn < ary2minn)
    {
      cout<<2*ary1minn<<endl;
      return 0;
    }
    else
    {
      cout<<-1<<endl;
      return 0;
    }
  }
  else if(ary1maxx < ary2minn)
  {
    if(ary1maxx >= 2*ary1minn)
    {
      extra = 2;
      ans = ary1maxx;
    }
    else if(2*ary1minn < ary2minn)
    {
      extra = 1;
      ans = 2*ary1minn;
    }
    else
    {
      extra = 0;
      ans = -1;
    }
  }
  else
    ans = -1;
  //cout<<ary1minn<<" "<<ary1maxx<<" "<<ary2minn<<endl;
  if(ary1maxx > 0)
    cout<<ans<<endl;

  return 0;
}