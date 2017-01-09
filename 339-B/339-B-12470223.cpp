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
#define MP make_pair
#define PB push_back
#define PI 3.141592653589793
typedef unsigned long long LL;

using namespace std;

LL n, m, sum, ary[100010];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>m;
  for(int i = 1; i <= m ; i++)
    cin>>ary[i];
  ary[0] = ary[1];
  sum = ary[1]-1;
  for(int i = 1; i <= m ; i++)
  {
    if(ary[i] > ary[i-1])
      sum += ary[i]-ary[i-1];
    else if(ary[i] != ary[i-1])
      sum += ary[i]-1;
  }
  for(int i = 1; i < m; i++)
  {
    if(ary[i] > ary[i+1])
      sum += (n-ary[i])+1;
  }
  cout<<sum<<endl;
}