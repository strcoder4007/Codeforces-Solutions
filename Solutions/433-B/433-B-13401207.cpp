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

long long n, ary[100010], newary[100010], m;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
{
  cin>>ary[i];
  newary[i] = ary[i];
}
for(int i = 2; i <= n; i++)
  ary[i] += ary[i-1];

sort(newary+1, newary+n+1);
for(int i = 2; i <= n; i++)
  newary[i] += newary[i-1];

cin>>m;
while(m--)
{
  int type, l, r;
  cin>>type>>l>>r;
  if(type == 1)
    cout<<ary[r]-ary[l-1]<<endl;
  else
    cout<<newary[r]-newary[l-1]<<endl;
}

return 0;}