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

long long n, ary[2010][2010], sum, maxx, ans, newary[2010][2010], x, y, test;
long long saved_ary[2010][2010], final_ary[2010][2010];
pair<long long, long long>fst, sec;


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(long long i = 1; i <= n; i++)
    for(long long j = 1; j <= n; j++)
        cin>>ary[i][j], newary[i][j] = saved_ary[i][j] = ary[i][j];

///////////for ary//////////////////

for(long long xs = 1; xs <= n; xs++)
{
    long long i = 1, j = xs;
    sum = 0;
    for(long long k = 1; k <= n-xs+1; k++)
    {
        sum += ary[i][j];
        ++i, ++j;
    }
    i = 1, j = xs;
    for(long long k = 1; k <= n-xs+1; k++)
        ary[i][j] = sum, ++i, ++j;
}
for(long long xs = 2; xs <= n; xs++)
{
    long long i = xs, j = 1;
    sum = 0;
    for(long long k = 1; k <= n-xs+1; k++)
    {
        sum += ary[i][j];
        ++i, ++j;
    }
    i = xs, j = 1;
    for(long long k = 1; k <= n-xs+1; k++)
        ary[i][j] = sum, ++i, ++j;
}

////////////for newary/////////////

for(long long xs = 1; xs <= n; xs++)
{
    long long i = 1, j = xs;
    sum = 0;
    for(long long k = 1; k <= xs; k++)
    {
        sum += newary[i][j];
        ++i, --j;
    }
    i = 1, j = xs;
    for(long long k = 1; k <= xs; k++)
        newary[i][j] = sum, ++i, --j;
}
for(long long xs = 2; xs <= n; xs++)
{
    long long i = xs, j = n;
    sum = 0;
    for(long long k = 1; k <= n-xs+1; k++)
    {
        sum += newary[i][j];
        ++i, --j;
    }
    i = xs, j = n;
    for(long long k = 1; k <= n-xs+1; k++)
        newary[i][j] = sum, ++i, --j;
}
///////////done //////////////////

fst = mp(1, 1), sec = mp(1, 2);
for(long long i = 1; i <= n; i++)
    for(long long j = 1; j <= n; j++)
        final_ary[i][j] = ary[i][j]+newary[i][j]-saved_ary[i][j];

for(long long i = 1; i <= n; i++)
    for(long long j = 1; j <= n; j++)
        if(maxx < final_ary[i][j])
            maxx = final_ary[i][j], fst = mp(i, j);
test = (fst.F+fst.S)%2;

ans = maxx;
maxx = 0;
for(long long i = 1; i <= n; i++)
    for(long long j = 1; j <= n; j++)
        if(maxx < final_ary[i][j] && (i+j)%2 != test)
            maxx = final_ary[i][j], sec = mp(i, j);
ans += maxx;
cout<<ans<<endl;
cout<<fst.F<<" "<<fst.S<<" "<<sec.F<<" "<<sec.S<<endl;

return 0;}