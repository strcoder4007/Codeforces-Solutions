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
using namespace std;

long long n, m, ary[2010], num, ans, idx, found;
map<long long, long long> mymap;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(long long i = 1; i <= n; i++)
    cin>>ary[i], ++mymap[ary[i]];
num = n/m;

while(1)
{
    for(long long i = 1; i <= m; i++)
        mymap[i] = 0;
    for(long long i = 1; i <= n; i++)
        if(ary[i] <= m)
            ++mymap[ary[i]];
    found = 0;
    for(long long i = 1; i <= m; i++)
        if(mymap[i] < num)
            found = i;
    if(found == 0)
        break;
    idx = 0;
    for(long long i = 1; i <= n; i++)
        if(ary[i] > m)
            idx = i;
    if(idx == 0)
        for(long long i = 1; i <= n; i++)
            if(mymap[ary[i]] > num)
                idx = i;
    ary[idx] = found;
    ++ans;
}
cout<<num<<" "<<ans<<endl;
for(long long i = 1; i <= n; i++)
    cout<<ary[i]<<" ";
cout<<endl;

return 0;}