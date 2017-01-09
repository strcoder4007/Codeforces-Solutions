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

LL n, s, pmaxb, pmaxs, use1, use2;
LL bary[100010], sary[100010];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  #define int LL
  cin>>n>>s;
  for(int i = 0; i < n; i++)
  {
    string dir; int p, q;
    cin>>dir>>p>>q;
    if(dir == "B")
    {
      bary[p] += q;
      pmaxb = max(pmaxb, p);
    }
    else
    {
      sary[p] += q;
      pmaxs = max(pmaxs, p);
    }
  }
  use1 = s, use2 = s;
  vector<pair<int, int> >myvec;
  for(int i = 0; i <= pmaxs; i++)
  {
    if(use2 > 0 && sary[i] != 0)
    {
      myvec.pb(mp(i, sary[i]));
      --use2;
    }
  }
  int sz = myvec.size();
  for(int i = sz-1; i >= 0; i--)
    cout<<"S "<<myvec[i].F<<" "<<myvec[i].S<<endl;

  for(int i = pmaxb; i >= 0; i--)
  {
    if(use1 > 0 && bary[i] != 0)
    {
      cout<<"B "<<i<<" "<<bary[i]<<endl;
      --use1;
    }
  }

  cout<<endl;
  return 0;
}