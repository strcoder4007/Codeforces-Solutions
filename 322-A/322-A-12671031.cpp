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

int n, m, sz;
vector<pair<int, int> > myvec;
bool boys[101], girls[101];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  cin>>n>>m;
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= m; j++)
    {
      if(!boys[i] || !girls[j])
      {
        myvec.pb(mp(i, j));
        boys[i] = true;
        girls[j] = true;
      }
    }
  }
  sz = myvec.size();
  cout<<sz<<endl;
  for(int i = 0; i < sz; i++)
    cout<<myvec[i].F<<" "<<myvec[i].S<<endl;

  return 0;
}