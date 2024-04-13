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
using namespace std;

int n, ary[100010], sum, maxx, found[100010];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
  cin>>ary[i];
maxx = 1;
if(n > 1)
  maxx = 2;
sum = 2;
for(int i = 2; i < n; i++)
{
  if(ary[i] == ary[i-1]+ary[i-2])
    ++sum;
  else
  {
    maxx  = max(maxx, sum);
    sum = 2;
  }
}
if(n == 1)
  cout<<maxx<<endl;
else
  cout<<max(maxx, sum)<<endl;

return 0;}