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
#include <bitset>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
#define LL long long
using namespace std;


int n, ary[100010];
bool found;
vector<int>newary[100010];
vector<pair<int, int> >myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
  cin>>ary[i];
for(int i = 0; i < n; i++)
  newary[ary[i]].pb(i);
for(int i = 1; i < 100001; i++)
{
  if(newary[i].size() == 1)
    myvec.pb(mp(i, 0));
  else if(newary[i].size() > 1)
  {
    int diff = newary[i][1] -newary[i][0];
    found = false;
    for(int j = 1;  j < newary[i].size(); j++)
    {
      if(newary[i][j]-newary[i][j-1] != diff)
      {
        found = true;
        break;
      }
    }
    if(!found)
      myvec.pb(mp(i, diff));
  }
}
cout<<myvec.size()<<endl;
for(int i = 0; i < myvec.size(); i++)
  cout<<myvec[i].F<<" "<<myvec[i].S<<endl;

return 0;}