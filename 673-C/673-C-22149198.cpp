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

int n, ary[5010], found[5010], ans[5010], maxx;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
    cin>>ary[i];
for(int i = 1; i <= n; i++)
{
    maxx = 0;
    memset(found, 0, sizeof found);
    for(int j = i; j <= n; j++)
    {
        ++found[ary[j]];
        if((found[ary[j]] == found[ary[maxx]] && ary[j] < ary[maxx]) || found[ary[j]] > found[ary[maxx]])
            maxx = j;
        ++ans[ary[maxx]];
    }
}
for(int i = 1; i <= n; i++)
    cout<<ans[i]<<" ";
cout<<endl;

return 0;}