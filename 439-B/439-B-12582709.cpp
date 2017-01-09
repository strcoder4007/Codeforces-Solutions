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

LL n, x, ary[100010], sum;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>x;
  for(int i = 0; i < n ; i++)
    cin>>ary[i];
  sort(ary, ary+n);
  for(int i = 0; i < n; i++)
  {
    sum += ary[i]*max(x, LL(1));
    --x;
  }
  cout<<sum<<endl;

  return 0;
}