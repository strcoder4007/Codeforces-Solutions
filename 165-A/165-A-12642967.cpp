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

int n, vr, vl, hu, hd, cnt;
pair<int, int> ary[201];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 0; i < n; i++)
  {
    int x, y;
    cin>>x>>y;
    ary[i] = mp(x, y);
  }
  for(int i = 0; i < n; i++)
  {
    vr = 0, vl = 0, hu = 0, hd = 0;
    for(int j = 0; j < n; j++)
    {
      if(ary[i].S == ary[j].S)
      {
        if(ary[i].F < ary[j].F)
          ++vr;
        if(ary[i].F > ary[j].F)
          ++vl;
      }
      if(ary[i].F == ary[j].F)
      {
        if(ary[i].S < ary[j].S)
          ++hu;
        if(ary[i].S > ary[j].S)
          ++hd;
      }
        //cout<<"<"<<ary[i].F<<" "<<ary[i].S<<"> <"<<ary[j].F<<" "<<ary[j].S<<"> "
        //<<vr<<" "<<vl<<" "<<hu<<" "<<hd<<endl;
    }
    if(vr >= 1 && vl >= 1 && hu >= 1 && hd >= 1)
    {
      //cout<<"**********count = "<<cnt<<endl;
      ++cnt;
    }
  }
  cout<<cnt<<endl;

  return 0;
}