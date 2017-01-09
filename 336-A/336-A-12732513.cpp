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
#define endl "\n"
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;

using namespace std;

int x, y, limit;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>x>>y;
  limit = abs(x)+abs(y);
  if(x > 0 && y > 0)
    cout<<0<<" "<<limit<<" "<<limit<<" "<<0<<endl;
  else if(x < 0 && y > 0)
    cout<<-(limit)<<" 0 0 "<<limit<<endl;
  else if(x < 0 && y < 0)
    cout<<-(limit)<<" 0 0 "<<-(limit)<<endl;
  else if(x > 0 && y < 0)
    cout<<0<<" "<<-(limit)<<" "<<limit<<" 0"<<endl;

  return 0;
}