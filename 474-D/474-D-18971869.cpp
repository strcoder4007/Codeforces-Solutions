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

long long t, k, dp[100010], sum[100010];

int32_t main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>t>>k;
dp[0] = 1, sum[0] = 1;
for(long long i = 1; i <= 100000; i++)
{
    dp[i] = dp[i-1];
    if(i >= k)
        dp[i] += dp[i-k];
    dp[i] %= MOD;
    sum[i] = (sum[i-1]+dp[i])%MOD;
}
while(t--)
{
    long long l, r; cin>>l>>r;
    cout<<(sum[r]-sum[l-1]+MOD)%MOD<<endl;
}

return 0;}