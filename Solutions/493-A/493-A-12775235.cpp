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

string a, b, team, card, away[100], home[100];
int n, tyme, pnum;
vector<pair<string, pair<int, int> > > ans;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);


cin>>a>>b>>n;
for(int i = 0; i < n; i++)
{
  cin>>tyme>>team>>pnum>>card;
  if(team == "a")
  {
    away[pnum] += card;
    if(away[pnum] == "yy" || away[pnum] == "r" || away[pnum] == "yr")
      ans.pb(mp(b, mp(pnum, tyme)));
  }
  else
  {
    home[pnum] += card;
    if(home[pnum] == "yy" || home[pnum] == "r" || home[pnum] == "yr")
      ans.pb(mp(a, mp(pnum, tyme)));
  }
}
int sz = ans.size();
for(int i = 0; i < sz; i++)
  cout<<ans[i].F<<" "<<ans[i].S.F<<" "<<ans[i].S.S<<endl;
return 0;
}