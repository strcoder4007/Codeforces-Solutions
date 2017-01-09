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

int minn, n, m, sum, ary[501][501];
bool found[100283];

void esieve(LL n)
{
    for(int i = 2; i < n; i++)
    {
      if(found[i] == false)
      {
      int ii = 2;
      while(i*ii <= n)
      {
        found[i*ii] = true;
        ++ii;
      }//while statement
    }//if statement
    }
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

esieve(100010);
found[1] = true;
minn = 100283;
cin>>n>>m;
for(int i = 0; i < n; i++)
  for(int j = 0; j < m; j++)
    cin>>ary[i][j];

for(int i = 0; i < n; i++)
{
  sum = 0;
  for(int j = 0; j < m; j++)
  {
    if(found[ary[i][j]] == true)
    {
      for(int k = ary[i][j]; k < 100283; k++)
        if(found[k] == false)
        {
          sum += (k-ary[i][j]);
          break;
        }
    }
  }
  if(sum != 0)
    minn = min(minn, sum);
  else
  {
    cout<<0<<endl;
    return 0;
  }
}

for(int j = 0; j < m; j++)
{
  sum = 0;
  for(int i = 0; i < n; i++)
  {
    if(found[ary[i][j]] == true)
    {
      for(int k = ary[i][j]; k < 100283; k++)
        if(found[k] == false)
        {
          sum += (k-ary[i][j]);
          break;
        }
    }
  }
  if(sum != 0)
    minn = min(minn, sum);
  else
  {
    cout<<0<<endl;
    return 0;
  }
}
cout<<minn<<endl;

return 0;}