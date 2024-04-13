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

int n, ary[300010], start;
vector<pair<int, int> >myvec;
vector<int>newvec;
set<int>myset;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
    cin>>ary[i];
start = 0;
for(int i = 0; i < n; i++)
{
    newvec.pb(ary[i]);
    myset.insert(ary[i]);
    if(myset.size() != newvec.size())
        myvec.pb(mp(start+1, i+1)), start = i+1, myset.clear(), newvec.clear();
}
if(myvec.size() == 0)
{
    cout<<-1<<endl;
    return 0;
}
myvec[myvec.size()-1].S=n;
cout<<myvec.size()<<endl;
for(int i = 0; i < myvec.size(); i++)
    cout<<myvec[i].F<<" "<<myvec[i].S<<endl;

return 0;}