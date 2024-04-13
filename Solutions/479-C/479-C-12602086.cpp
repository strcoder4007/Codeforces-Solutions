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

int best, n, a, b;
vector<pair<int, int> >myvec;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 0; i < n; i++)
  {
    cin>>a>>b;
    myvec.pb(mp(a, b));
  }
  best = -1;
  sort(myvec.begin(), myvec.end());
  for(int i = 0; i < n; i++)
  {
    if(best <= myvec[i].S)
      best = myvec[i].S;
    else
      best = myvec[i].F;
  }
  cout<<best<<endl;
  return 0;
}