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
#define INT_MAX 1e4+1
typedef long long LL;
using namespace std;

int n, k;
double dist, x, y;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>k;
cin>>x>>y;
for(int i = 0; i < n-1; i++)
{
  int x2, y2;
  cin>>x2>>y2;
  dist += sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
  x = x2, y = y2;
}
cout<<fixed<<setprecision(9)<<dist/50.0*k<<endl;

return 0;}