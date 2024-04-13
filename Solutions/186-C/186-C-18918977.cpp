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

long long n, res;

long long binpow(long long a, long long b)
{
    long long ans = 1;
    if(b == 0)
        return ans;
    else if(b&1)
    {
        ans = (a*binpow(a, b-1))%MOD;
        return ans%MOD;
    }
    else
    {
        ans = binpow(a, (b >>= 1));
        return (ans*ans)%MOD;
    }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
if(n == 0)
{
    cout<<1<<endl;
    return 0;
}
res = binpow(2, n-1)%MOD;
res = (res*(1 + binpow(2, n))%MOD)%MOD;
cout<<res<<endl;

return 0;}