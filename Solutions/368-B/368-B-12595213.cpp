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

int n, m, ary[100010], found[100010], res[100010], num;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>m;
  for(int i = 0; i < n; i++)
    cin>>ary[i];
  for(int i = n-1;  i >= 0; i--)
  {
    if(!found[ary[i]])
    {
      found[ary[i]] = 1;
      ++num;
    }
    res[i] = num;
  }
  while(m--)
  {
    int xs;
    cin>>xs;
    cout<<res[xs-1]<<endl;
  }

  return 0;
}