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
typedef unsigned long long LL;

using namespace std;

int n, m, jc, newary[101], ary[101][101], idx, maxim;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>m;
  for(int i = 0; i < m; i++)
    for(int j = 0;  j < n; j++)
      cin>>ary[i][j];
  for(int i = 0;  i < m; i++)
  {
    jc = max_element(ary[i], ary[i]+n)-ary[i];
    int maxx = *max_element(ary[i], ary[i]+n);
    ++newary[jc];
  }
  maxim = -1;
  for(int i = 0; i < n; i++)
  {
    if(maxim < newary[i])
    {
      maxim = newary[i];
      idx = i;
    }
  }
  cout<<idx+1<<endl;

}