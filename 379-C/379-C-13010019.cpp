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
#define pow_seven 10000000
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;
using namespace std;

int n, ary[300010], num;
vector<pair<int, int> > myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  int xs; cin>>xs;
  myvec.pb(mp(xs, i));
}
sort(myvec.begin(), myvec.end());
num = -1;
for(int i = 0; i < n; i++, ++num)
  num = max(num, myvec[i].F), ary[myvec[i].S] = num;
for(int i = 0; i < n; i++)
  cout<<ary[i]<<" ";
cout<<endl;


return 0;}