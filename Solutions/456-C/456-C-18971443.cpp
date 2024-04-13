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

long long n, xs, found[100010], dp[100010], last;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(long long i = 1; i <= n; i++)
    cin>>xs, ++found[xs];
for(long long i = 1; i <= 100000; i++)
{
    dp[i] = max(dp[i], dp[i-1]);
    if(i == 1)
        last = 0;
    else
        last = dp[i-2];
    dp[i] = max(dp[i], last+(found[i]*i));
}
cout<<*max_element(dp, dp+100001)<<endl;;

return 0;}