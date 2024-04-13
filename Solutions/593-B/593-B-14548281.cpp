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

long long n, x1, x2, maxx;
vector<pair<long long, long long> >myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
cin>>x1>>x2;
for(int i = 0; i < n; i++)
{
  int x, y;
  cin>>x>>y;
  myvec.pb(mp(x*x1+y, x*x2+y));
}
sort(myvec.begin(), myvec.end());
maxx = myvec[0].S;
for(int i = 1; i < myvec.size(); i++)
{
    if(myvec[i].S < maxx)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    maxx = max(maxx, myvec[i].S);
}
cout<<"NO"<<endl;

return 0;}