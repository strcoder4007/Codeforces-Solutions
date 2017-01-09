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
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

long long l1, l2, r1, r2, n, ans;
vector<pair<long long, long long> >myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>l1>>r1>>l2>>r2>>n;
myvec.pb(mp(l1, r1));
myvec.pb(mp(l2, r2));
sort(myvec.begin(), myvec.end());
l1 = myvec[0].F, r1 = myvec[0].S;
l2 = myvec[1].F, r2 = myvec[1].S;
if(r1 < l2 || r2 < l1)
    cout<<0<<endl;
else
{
    ans = min(r1, r2)-max(l1, l2)+1;
    if(n >= max(l1, l2) && n <= min(r1, r2))
        --ans;
    cout<<ans<<endl;
}

return 0;}