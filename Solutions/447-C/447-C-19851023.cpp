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

int n, ary[100010], lft[100010], rht[100010], ans;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
    cin>>ary[i];
lft[0] = 1;
for(int i = 1; i < n; i++)
{
    lft[i] = lft[i-1]+1;
    if(ary[i] <= ary[i-1])
        lft[i] = 1;
}
rht[n-1] = 1;
for(int i = n-2; i+1; i--)
{
    rht[i] = rht[i+1]+1;
    if(ary[i] >= ary[i+1])
        rht[i] = 1;
}

for(int i = 0; i < n; i++)
    ans = max(ans, lft[i]);
for(int i = 0; i < n; i++)
    ans = max(ans, rht[i]);
for(int i = 1; i < n; i++)
    ans = max(ans, lft[i-1]+1);
for(int i = 0; i < n-1; i++)
    ans = max(ans, rht[i+1]+1);

for(int i = 1; i < n; i++)
    if (ary[i-1]+1 < ary[i+1])
        ans = max(ans,lft[i-1]+rht[i+1]+1);
cout<<ans<<endl;

return 0;}