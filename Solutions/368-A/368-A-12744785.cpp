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

int n, d, m, ary[101], sum;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>d;
  for(int i = 0; i < n; i++)
    cin>>ary[i];
  sort(ary, ary+n);
  cin>>m;
  if(m >= n)
  {
    sum -= (m-n)*d;
    for(int i = 0; i < n; i++)
      sum += ary[i];
  }
  else
  {
    for(int i = 0; i < m; i++)
      sum+=ary[i];
  }
  cout<<sum<<endl;

  return 0;
}