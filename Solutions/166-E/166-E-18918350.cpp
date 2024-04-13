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

long long n;

vector<vector<long long> > mul(const vector<vector<long long> >&a, const vector<vector<long long> > &b)
{
    vector<vector<long long> >res(4);
    for(int i = 0; i < 4; i++)
        res[i].resize(4);
    for(long long i = 0; i < 4; i++)
        for(long long j = 0; j < 4; j++)
        {
            long long sum = 0;
            for(long long k = 0; k < 4; k++)
                sum += (a[i][k]*b[k][j])%MOD;
            res[i][j] = sum%MOD;
        }
        return res;
}

vector<vector<long long> > binpow(const vector<vector<long long> > &a, long long k)
{
    if(k == 0)
    {
        vector<vector<long long> >res(4);
        for(long long i = 0; i < 4; i++)
            res[i].resize(4);
        for(long long i = 0; i < 4; i++)
            res[i][i] = 1;
        return res;
    }
    else if(k&1)
        return mul(binpow(a, k-1), a);
    else
    {
        vector<vector<long long> >res = binpow(a, (k>>1));
        return mul(res, res);
    }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
vector<vector<long long> > a;
a.resize(4);
for(int i = 0; i < 4; i++)
    a[i].resize(4);
for(long long i = 0; i < 4; i++)
    for(long long j = 0; j < 4; j++)
        a[i][j] = (i == j? 0:1);

vector<vector<long long> >ans = binpow(a, n);
cout<<ans[0][0]<<endl;

return 0;}