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

int n, k, x, y, found[4005], div1, div2, extra;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
for(int i = 0; i < k; i++)
{
  int xs; cin>>xs;
  if(xs == 2)
  {
    cin>>x;
    found[x] = 1;
  }
  else
  {
    cin>>x>>y;
    found[x] = 1, found[y] = 1;
  }
}
for(int i = 1; i < n; i++)
{
  if(found[i] == 0 && found[i+1] == 0)
    ++div1, ++i;
  else if(found[i] == 0)
    ++extra;
}
for(int i = 1; i < n; i++)
  if(found[i] == 0)
    ++div2;
cout<<div1+extra<<" "<<div2<<endl;

return 0;}