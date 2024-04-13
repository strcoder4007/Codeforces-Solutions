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

int n, sum;
vector<pair<int, int> >myvec;

int solve(int reserve, int cur)
{
  if(reserve == 0 || cur == n)
    return 0;
  sum += myvec[cur].S;
  reserve += myvec[cur].F-1;
  sum += solve(reserve, cur+1);
  return 0;
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  int x, y; cin>>x>>y;
  myvec.pb(mp(y, x));
}
sort(myvec.begin(), myvec.end(), greater<pair<int, int> >());
int x = solve(1, 0);
cout<<sum<<endl;

return 0;}