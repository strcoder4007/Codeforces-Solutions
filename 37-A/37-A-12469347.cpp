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

int n, ary[1001], maxx, cnt, newary[1001];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 0; i < n; i++)
    {
      cin>>ary[i];
      ++newary[ary[i]];
    }
  maxx = -1;
  for(int i = 0; i < 1001; i++)
  {
    if(newary[i] > maxx)
      maxx = newary[i];
    if(newary[i] > 0)
      ++cnt;
  }
  cout<<maxx<<" "<<cnt<<endl;

}