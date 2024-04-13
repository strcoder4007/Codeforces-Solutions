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
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>
#include <iomanip>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
#define have wghwiejojgoejfoejfast
using namespace std;

int n, ans, save, cnt;
vector<int>newvec;
vector<pair<pair<int, int>, int> >myvec, v1;
map<pair<int, int>, int> mymap, found;
pair<pair<int, int>, int> ans1, ans2;


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    newvec.clear();
    int x, y, z; cin>>x>>y>>z;
    newvec.pb(x), newvec.pb(y), newvec.pb(z);
    sort(newvec.begin(), newvec.end(), greater<int>());
    myvec.pb(mp(mp(newvec[0], newvec[1]), newvec[2]));
    v1.pb(mp(mp(newvec[0], newvec[1]), newvec[2]));
    if(newvec[2] > ans)
        ans = newvec[2], save = i+1;
}
newvec.clear();
sort(myvec.begin(), myvec.end());
reverse(myvec.begin(), myvec.end());
for(int i = 0; i < n; i++)
{
    if(found[myvec[i].F] == 0)
        mymap[myvec[i].F] = myvec[i].S, found[myvec[i].F] = 1;
    else if(found[myvec[i].F] == 1)
    {
        mymap[myvec[i].F] += myvec[i].S;
        found[myvec[i].F] = 2;
        if(min(min(myvec[i].F.F, myvec[i].F.S), mymap[myvec[i].F]) > ans)
            ans1 = myvec[i-1], ans2 = myvec[i], ans = min(min(myvec[i].F.F, myvec[i].F.S), mymap[myvec[i].F]);
    }
}
for(int i = 0; i < v1.size(); i++)
{
    if(v1[i] == ans1 && v1[i].S != 0 && cnt < 2)
        newvec.pb(i+1), v1[i].S = 0, ++cnt;
    if(v1[i] == ans2 && v1[i].S != 0 && cnt < 2)
        newvec.pb(i+1), v1[i].S = 0, ++cnt;
}
if(newvec.size() == 0)
    cout<<1<<endl<<save<<endl;
else
{
    cout<<newvec.size()<<endl;
    cout<<newvec[0]<<" "<<newvec[1]<<endl;
}

return 0;}