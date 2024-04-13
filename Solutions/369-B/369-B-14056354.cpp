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
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

int n, k, r, l, sall, sk, res, newsk, newk, save_n;
vector<int>myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k>>l>>r>>sall>>sk;
save_n = n;
newsk = sk, newk = k;
for(int i = 0; i < k-1; i++)
{
  res = newsk/newk;
  if(l <= res && res >= r)
    myvec.pb(res);
  else
  {
    while(res < l)
      ++res;
    while(res > r)
      --res;
    myvec.pb(res);
  }
  newsk -= res;
  --newk;
}
myvec.pb(newsk-(res*(newk-1)));
sall -= sk;
n -= k;
newsk = sall, newk = n;
for(int i = 0; i < n-1; i++)
{
  res = newsk/newk;
  if(l <= res && res >= r)
    myvec.pb(res);
  else
  {
    while(res < l)
      ++res;
    while(res > r)
      --res;
    myvec.pb(res);
  }
  newsk -= res;
  --newk;
}
for(int i = 0; i < myvec.size(); i++)
  cout<<myvec[i]<<" ";
if(save_n != k)
  cout<<newsk-(res*(newk-1))<<endl;

return 0;}