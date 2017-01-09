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

int n, x, sum, cnt, ary[1001];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>x;
  for(int i = 0; i < n; i++)
  {
    cin>>ary[i];
    sum += ary[i];
  }
  sum = abs(sum);
  while(sum > 0)
  {
    sum -= x;
    ++cnt;
  }
cout<<cnt<<endl;
}