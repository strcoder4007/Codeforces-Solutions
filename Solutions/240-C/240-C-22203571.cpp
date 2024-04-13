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

int n, cnt, ary[1010][1010], maxx;

void binary(int l, int r, int times)
{
    if(l == r)
        return;
    int mid = (l+r)>>1;
    maxx = max(maxx, times);
    for(int i = l; i <= mid; i++)
        ary[times][i] = 1;
    binary(l, mid, times+1);
    binary(mid+1, r, times+1);
}

int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
binary(1, n, 1);
cout<<maxx<<endl;
for(int i = 1; i <= maxx; i++)
{
    cnt = 0;
    for(int j = 1; j <= n; j++)
        if(ary[i][j])
            ++cnt;
    cout<<cnt<<" ";
    for(int j = 1; j <= n; j++)
        if(ary[i][j])
            cout<<j<<" ";
    cout<<endl;
}

return 0;}