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

int n, k, found[1000];
vector<int>ary[1000];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>k;
for(int i = 0; i < k; i++)
{
  int xs; cin>>xs;
  ary[i].pb(xs);
  found[xs] = 1;
}
int x = 1;
for(int i = 0; i < n-1; i++)
  for(int j = 0; j < k; j++)
  {
    while(found[x] == 1)
      x++;
    ary[j].pb(x);
    found[x] = 1;
    ++x;
  }
for(int i = 0; i < k; i++)
{
  for(int j = 0; j < n; j++)
    cout<<ary[i][j]<<" ";
  cout<<endl;
}

return 0;}