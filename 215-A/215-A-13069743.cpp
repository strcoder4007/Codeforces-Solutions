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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define pow_seven 10000000
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
using namespace std;

int n, m, a[51], b[51], init, cnt, sz;
vector<int>myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i=  0; i < n; i++)
  cin>>a[i];
cin>>m;
for(int i = 0; i < m; i++)
  cin>>b[i];
for(int i = 0; i < m; i++)
{
  for(int j = 0; j < n; j++)
  {
    if(b[i]/a[j] == b[i]/float(a[j]))
      myvec.pb(b[i]/a[j]);
  }
}
sz = myvec.size();
sort(myvec.begin(), myvec.end(), greater<int>());
init = myvec[0];
for(int i = 0; i < sz; i++)
  if(myvec[i] == init)
    ++cnt;
cout<<cnt<<endl;

return 0;}