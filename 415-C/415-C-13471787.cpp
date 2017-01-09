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
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

long long n, k, t, ary[100010];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>k;
if(n == 1)
{
  if(k > 0)
  {
    cout<<-1<<endl;
    return 0;
  }
  else
  {
    cout<<1<<endl;
    return 0;
  }
}
if(n/2 > k)
{
  cout<<-1<<endl;
  return 0;
}
t = k-(n/2-1);
ary[1] = t, ary[2] = 2*t;
for(int i = 3; i <= n; i++)
  ary[i] = 500000000+i;
for(int i = 1; i <= n; i++)
  cout<<ary[i]<<" ";
cout<<endl;

return 0;}