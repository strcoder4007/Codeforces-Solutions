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

long long n, x1, x2, y1, y2, x, y, r1, r2, maxx, ans;
vector<pair<long long, long long> >myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>x1>>y1>>x2>>y2;
for(long long i = 0; i < n; i++)
{
    cin>>x>>y;
    myvec.pb(mp(((x1-x)*(x1-x)+(y1-y)*(y1-y)), ((x2-x)*(x2-x)+(y2-y)*(y2-y))));
}
myvec.pb(mp(0, 0));
ans = 9e18;
for(long long i = 0; i < myvec.size(); i++)
{
    r1 = myvec[i].F;
    maxx = 0;
    for(long long j = 0; j < myvec.size(); j++)
        if(myvec[j].F > r1)
            maxx = max(maxx, myvec[j].S);
    ans = min(ans, r1+maxx);
}
cout<<ans<<endl;

return 0;}