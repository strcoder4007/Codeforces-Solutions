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
typedef long long LL;

using namespace std;

int n, m, ary[105];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 1; i <= n; i++)
    cin>>ary[i];
  cin>>m;
  while(m--)
  {
    int x, y; cin>>x>>y;
    ary[x-1] += y-1;
    ary[x+1] += (ary[x]-y);
    ary[x] = 0;
  }
  for(int i = 1; i <= n; i++)
    cout<<ary[i]<<endl;

  return 0;
}