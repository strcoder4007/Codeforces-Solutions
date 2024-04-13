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

int n, cnt;
char ary[1001][1001];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
    {
      if((i+j)&1)
        ary[i][j] = '.';
      else
      {
        ary[i][j] = 'C';
        ++cnt;
      }
    }
    cout<<cnt<<endl;
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n; j++)
      cout<<ary[i][j];
    cout<<endl;
  }
}