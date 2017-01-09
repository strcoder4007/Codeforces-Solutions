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
#define endl "\n"
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;

using namespace std;

int n, s, maxx, sum;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>s;
  for(int i = 0; i < n; i++)
  {
    int xs; cin>>xs;
    sum += xs;
    maxx = max(xs, maxx);
  }
  if(sum - maxx <= s)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

  return 0;
}