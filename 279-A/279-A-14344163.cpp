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

vector<pair<int, int> >myvec;
int x, y, a, b, x3, x2, y3, y2;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>a>>b;
myvec.pb(mp(x, y));
while(y != -101)
{
  x = abs(x);
  ++x;
  myvec.pb(mp(x, y));
  y = abs(y);
  ++y;
  myvec.pb(mp(x, y));
  x = -(x);
  myvec.pb(mp(x, y));
  y = -(y);
  myvec.pb(mp(x, y));
}
for(int i = 1; i < myvec.size(); i++)
{
  x3 = myvec[i-1].F, x2 = myvec[i].F;
  y3 = myvec[i-1].S, y2 = myvec[i].S;
  if(x2 == x3 && a == x3 && (y2 >= b && b >= y3))
  {
    cout<<i-1<<endl;
    return 0;
  }
  if(x2 == x3 && a == x3 && (y2 <= b && b <= y3))
  {
    cout<<i-1<<endl;
    return 0;
  }
  if(y2 == y3 && b == y3 && (x2 <= a && a <= x3))
  {
    cout<<i-1<<endl;
    return 0;
  }
  if(y2 == y3 && b == y3 && (x2 >= a && a >= x3))
  {
    cout<<i-1<<endl;
    return 0;
  }
}

return 0;}