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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
typedef long long LL;
using namespace std;

int n, k, ary[100010];

int main()
{
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(0);

    cin>>n>>k;
    if(n == k)
    {
      cout<<-1<<endl;
      return 0;
    }
    ary[1] = 1, ary[n] = n;
    for(int i = 0, val = 2; i < k; i++, val++)
      ary[val] = val;
    for(int i = 2; i < n; i++)
      if(ary[i] == 0)
        ary[i] = i+1, ary[i+1] = i;
    if((k != n-1 && (k&1))|| (k != n-1 && !(n&1)&&!(k&1)))
    {
      swap(ary[1], ary[n]);
    }
    for(int i = 1; i <= n; i++)
      cout<<ary[i]<<" ";
    cout<<endl;

    return 0;
}