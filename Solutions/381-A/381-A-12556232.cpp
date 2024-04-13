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
typedef long long LL;

using namespace std;

int n, s, d, ary[1001];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int k = 0; k  < n;  k++)
    cin>>ary[k];

  int i = 0, j = n-1;

  while(ary[i] != 0 && ary[j] != 0)
  {
    if(ary[i] >= ary[j])
    {
      s += ary[i];
      ary[i] = 0;
      ++i;
    }
    else
    {
      s += ary[j];
      ary[j] = 0;
      --j;
    }
    if(ary[i] >= ary[j])
    {
      d += ary[i];
      ary[i] = 0;
      ++i;
    }
    else
    {
      d += ary[j];
      ary[j] = 0;
      --j;
    }

  }
  cout<<s<<" "<<d<<endl;
  return 0;
}