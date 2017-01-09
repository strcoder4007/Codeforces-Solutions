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
using namespace std;

int n, init, sum;
vector<pair<int, int> >myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>init;
for(int i = 0; i < n; i++)
{
    int x, y;
    cin>>x>>y;
    myvec.pb(mp(x, y));
}
sort(myvec.begin(), myvec.end(), greater<pair<int, int> >());
for(int i = 0; i < n; i++)
{
    sum += init-myvec[i].F;
    init = myvec[i].F;
    if(sum < myvec[i].S)
      sum = myvec[i].S;
}
if(myvec[n-1].F != 0)
  sum+=myvec[n-1].F;
cout<<sum<<endl;


return 0;}