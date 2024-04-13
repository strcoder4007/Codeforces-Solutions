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
using namespace std;

int n, m, sum1, sum2;
vector<int> myvec, newvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>m;
for(int i = 1; i <= m; i++)
{
  int xs; cin>>xs;
  myvec.pb(xs);
}
newvec = myvec;
for(int i = 0; i < n; i++)
{
  sort(myvec.begin(), myvec.end());
  sum1 += myvec[0];
  --myvec[0];
  if(myvec[0] == 0)
    myvec.erase(myvec.begin());
}
for(int i = 0; i < n; i++)
{
  sort(newvec.begin(), newvec.end(), greater<int>());
  sum2 += newvec[0];
  --newvec[0];
  if(newvec[0] == 0)
    newvec.erase(newvec.begin());
}
cout<<sum2<<" "<<sum1<<endl;

return 0;}