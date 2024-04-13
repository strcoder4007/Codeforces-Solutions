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

long long n, cnt;
vector<pair<int , int> > myvec;
int lt, rt;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  int l, r; cin>>l>>r;
  myvec.pb(mp(r, l));
}
sort(myvec.begin(), myvec.end());
for(int i = 0; i < myvec.size(); i++)
{
  if(myvec[i].S > rt)
    ++cnt, rt = myvec[i].F;
}
cout<<cnt<<endl;

return 0;}