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
#include <climits>

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

long long n, m, a[200010], b[200010], fst, sec, maxx;
vector<long long>myvec;
vector<pair<long long, long long> >newvec, vec1;
bool found_alpha, found_middle_ground, found_beta;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
myvec.pb(0);
maxx = -9e18;
for(long long i = 1; i <= n; i++)
{
    cin>>a[i];
    myvec.pb(a[i]);
}
sort(a+1, a+n+1);
cin>>m;
for(long long i = 1; i <= m; i++)
{
    cin>>b[i];
    myvec.pb(b[i]);
}
sort(b+1, b+m+1);
for(long long i = 0; i < myvec.size(); i++)
{
    long long up = upper_bound(a+1, a+n+1, myvec[i])-a-1;
    fst = 2*up+3*(n-up);
    up = upper_bound(b+1, b+m+1, myvec[i])-b-1;
    sec = 2*up+3*(m-up);
    newvec.pb(mp(fst, sec));
}

for(long long i = 0; i < newvec.size(); i++)
    if(newvec[i].F-newvec[i].S > maxx)
        maxx = newvec[i].F-newvec[i].S;
sort(newvec.begin(), newvec.end(), greater<pair<long long, long long> >());
for(long long i = 0; i < newvec.size(); i++)
    if(newvec[i].F-newvec[i].S == maxx)
    {
        cout<<newvec[i].F<<":"<<newvec[i].S<<endl;
        return 0;
    }


return 0;}