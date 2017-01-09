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

int n, cnt, h, ary[100010];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
  cin>>ary[i];
cnt = n;
cnt += ary[0];
h += ary[0];
for(int i = 0; i < n-1; i++)
{
  if(ary[i+1] < ary[i])
  {
    h = ary[i+1];
    cnt += ary[i]-ary[i+1];
    ++cnt;
  }
  else if(ary[i+1] > ary[i])
  {
    h = ary[i+1];
    cnt += ary[i+1]-ary[i];
    ++cnt;
  }
  else
    ++cnt;
}
cout<<cnt<<endl;

return 0;}