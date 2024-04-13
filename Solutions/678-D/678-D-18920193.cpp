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

long long a, b, n, x, ans;

void mul(long long a[2][2], long long b[2][2])
{
    long long save[2][2];
    for(long long i = 0; i < 2; i++)
        for(long long j = 0; j < 2; j++)
        {
            long long sum = 0;
            for(long long k = 0; k < 2; k++)
                sum += (a[i][k]*b[k][j])%MOD;
            save[i][j] = sum;
        }
    for(long long i = 0; i < 2; i++)
        for(long long j = 0; j < 2; j++)
            a[i][j] = save[i][j];
}

void binpow(long long a[2][2], long long b)
{
    long long res[2][2];
    for(long long i = 0; i < 2; i++)
        for(long long j = 0; j < 2; j++)
            res[i][j] = i == j;
    while(b)
    {
        if(b&1)
            mul(res, a), b--;
        else
            mul(a, a), b >>= 1;
    }
    for(long long i = 0; i < 2; i++)
        for(long long j = 0; j < 2; j++)
            a[i][j] = res[i][j];
}


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b>>n>>x;
long long z[2][2] = { {a, b}, {0, 1} };
binpow(z, n);
ans = (z[0][0]*x+z[0][1])%MOD;
cout<<ans<<endl;

return 0;}