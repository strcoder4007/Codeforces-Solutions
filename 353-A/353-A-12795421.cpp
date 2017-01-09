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
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;

using namespace std;

int n, a, b, sum1, sum2;
pair<int, int>ary[101];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  cin>>a>>b;
  ary[i] = mp(a, b);
  sum1 += a, sum2 += b;
}
if(sum1&1 && sum2&1)
{
  for(int i = 0;  i < n; i++)
  {
    if(ary[i].F != ary[i].S && !(!(ary[i].F&1) && !(ary[i].S&1)))
    {
      cout<<1<<endl;
      return 0;
    }
  }
  cout<<-1<<endl;
  return 0;
}
else if(!(sum1&1) && !(sum2&1))
{
  cout<<0<<endl;
  return 0;
}
else
{
  cout<<-1<<endl;
  return 0;
}


return 0;}