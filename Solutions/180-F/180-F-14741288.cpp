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

int n, ary[100010], ary2[100010];
vector<pair<int, int> >myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
  cin>>ary[i];
for(int i = 1; i <= n; i++)
  cin>>ary2[i];
for(int i = 1; i <= n; i++)
  myvec.pb(mp(ary[i], ary2[i]));
sort(myvec.begin(), myvec.end());
for(int i = 0; i < myvec.size(); i++)
  cout<<myvec[i].S<<" ";
cout<<endl;

return 0;}