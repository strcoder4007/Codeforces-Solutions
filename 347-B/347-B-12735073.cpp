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

int n, ary[100010], cnt;
bool found, done[100010];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  memset(ary, -1, sizeof(ary));
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    cin>>ary[i];
    if(ary[i] == i)
    {
      ++done[i];
      ++cnt;
    }
  }
  for(int i = 0; i < n; i++)
  {
    if(ary[ary[i]] == i && done[i] == 0)
    {
      found = true;
      cnt+= 2;
      cout<<cnt<<endl;
      return 0;
    }
  }
  if(!found && n-cnt >= 2)
    ++cnt;
  cout<<cnt<<endl;

  return 0;
}