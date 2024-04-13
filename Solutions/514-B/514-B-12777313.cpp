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

int n, x, y, u[1001], ans, a[1001], b[1001];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>x>>y;
for(int i = 0; i < n; i++)
  cin>>a[i]>>b[i];
for(int i = 0; i < n; i++)
  if(!u[i])
  {
    ans++;
    for(int j = 0; j < n; j++)
      if((a[i] - x) * (b[j] - y) == (a[j] - x) * (b[i] - y))
        u[j] = 1;
  }
cout<<ans<<endl;

return 0;}