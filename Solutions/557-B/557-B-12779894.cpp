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

int n, ary[200010];
double upr, w, ans;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>w;
for(int i = 0; i < 2*n; i++)
  cin>>ary[i];
sort(ary, ary+2*n);
upr=ary[0];
upr=min(upr,ary[n]*0.5);
upr=min(upr,w*1.0/(3*n));
ans=upr*3*n;
cout.precision(10);
cout<<fixed<<ans<<endl;

return 0;}