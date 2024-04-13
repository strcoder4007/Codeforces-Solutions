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

int n, k, sum;
vector<int>myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
for(int i = 0; i < n; i++)
{
  int xs; cin>>xs;
  if(xs < 0 && k > 0)
    --k, myvec.pb(-xs);
  else
    myvec.pb(xs);
}
sort(myvec.begin(), myvec.end());
if(k&1)
  myvec[0] = -myvec[0];
for(int i = 0; i < myvec.size(); i++)
  sum += myvec[i];
cout<<sum<<endl;

return 0;}