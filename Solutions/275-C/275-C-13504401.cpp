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
#define LL long long
using namespace std;

long long  n, k, ary[100010], found[100010], cnt;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
for(int i = 0; i < n; i++)
  cin>>ary[i];
sort(ary, ary+n);
for(int i = 0; i < n; i++)
  if(binary_search(ary, ary+n, ary[i]*k) && found[i] == 0)
  {
    int xs = lower_bound(ary, ary+n, ary[i]*k)-ary;
    if(xs != i)
      found[xs] = 1;
  }
for(int i = 0; i < n; i++)
  if(found[i] == 0)
    ++cnt;
cout<<cnt<<endl;

return 0;}