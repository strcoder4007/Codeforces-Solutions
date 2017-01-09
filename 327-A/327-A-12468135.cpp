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


int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  int ans = 0, n, a[101];
  cin >> n;
  for (int i = 0; i < n; ++i) cin >> a[i];
  for (int i = 0; i < n; ++i)
    for (int j = i; j < n; ++j)
    {
      int sum = 0;
      for (int k = 0; k < n; ++k)
        if (i <= k && k <= j) sum += !a[k];
        else sum += a[k];
      ans = max(ans, sum);
    }
cout << ans<<endl;;
  return 0;

}