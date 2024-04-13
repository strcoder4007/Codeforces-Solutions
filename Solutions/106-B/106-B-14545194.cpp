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

int n, found[101];
vector<pair< int, pair<int, pair<int, pair<int, int> > > > > myvec;
vector<pair<int, int> >newvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int pro, ram, hdd, cost;
    cin>>pro>>ram>>hdd>>cost;
    myvec.pb(mp(pro, mp(ram, mp(hdd, mp(cost, i+1)))));
}
sort(myvec.begin(), myvec.end());

/*
for(int i = 0; i < n; i++)
  cout<<myvec[i].F<<" "<<myvec[i].S.F<<" "<<myvec[i].S.S.F<<" "<<myvec[i].S.S.S.F<<" "<<myvec[i].S.S.S.S<<endl;
*/

for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      if(i != j && myvec[j].F > myvec[i].F && myvec[j].S.F > myvec[i].S.F
          && myvec[j].S.S.F > myvec[i].S.S.F)
            {
                found[i] = 1;
                break;
            }
for(int i = 0; i < n; i++)
  if(!found[i])
        newvec.pb(mp(myvec[i].S.S.S.F, myvec[i].S.S.S.S));
sort(newvec.begin(), newvec.end());
cout<<newvec[0].S<<endl;

return 0;}