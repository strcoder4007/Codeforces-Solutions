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
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
using namespace std;

int n, minn, maxx;
pair<int, int> ary[100010];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
minn = 1000000001;
for(int i = 0; i < n; i++)
{
  int x, y; cin>>x>>y;
  ary[i] = mp(x, y);
  if(minn > x)
    minn = x;
  if(maxx < y)
    maxx = y;
}
for(int i = 0; i < n; i++)
{
  if(ary[i].F == minn && ary[i].S == maxx)
  {
    cout<<i+1<<endl;
    return 0;
  }
}
cout<<-1<<endl;

return 0;}