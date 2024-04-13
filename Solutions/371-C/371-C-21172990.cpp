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

long long a, b, c, x, y, z, bread, sausage, cheese;
long long fst, sec, thr, ans, r, l, mid, calc, have;
string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
cin>>a>>b>>c;
cin>>x>>y>>z;
cin>>have;
for(long long i = 0; i < st.size(); i++)
    if(st[i] == 'B')
        ++bread;
    else if(st[i] == 'S')
        ++sausage;
    else
        ++cheese;
r = 2e12;
while(r-l > 1)
{
    mid = (l+r)>>1;
    fst = max(0ll, mid*bread-a)*x;
    sec = max(0ll, mid*sausage-b)*y;
    thr = max(0ll, mid*cheese-c)*z;
    calc = fst+sec+thr;
    if(calc > have)
        r = mid;
    else if(calc <= have)
        l = mid;
}
fst = max(0ll, l*bread-a)*x;
sec = max(0ll, l*sausage-b)*y;
thr = max(0ll, l*cheese-c)*z;
if(fst+sec+thr > have)
    cout<<0<<endl;
else
    cout<<l<<endl;


return 0;}