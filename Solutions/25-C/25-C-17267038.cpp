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

long long n, ary[310][310], k;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(long long i = 1; i <= n; i++)
    for(long long j = 1; j <= n; j++)
        cin>>ary[i][j];
cin>>k;
for(long long i = 1; i <= k; i++)
{
    long long u, v, wt, ans = 0;
    cin>>u>>v>>wt;
    for(long long i = 1; i <= n; i++)
        for(long long j = 1; j <= n; j++)
        {
            ary[i][j] = min(ary[i][j], ary[i][u]+ary[v][j]+wt);
            ary[i][j] = min(ary[i][j], ary[i][v]+ary[u][j]+wt);
        }
    for(long long i = 1; i <= n; i++)
        for(long long j = 1; j <= n; j++)
            if(i < j)
                ans += ary[i][j];
    cout<<ans<<" ";
}
cout<<endl;



return 0;}