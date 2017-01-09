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

long long a, b, ans, sum, num, start, fst, sec, sz;
vector <long long> myvec,newvec, v1;

void count(long long xs)
{
    sz = 0;
    v1.clear();
    while(xs)
    {
        start = max(start, xs%10);
        v1.push_back(xs%10);
        xs /= 10;
        sz++;
    }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b;
count(a);
fst = sz, myvec = v1;
count(b);
sec = sz, newvec = v1;
++start;
for(long long i = 1; i <= 10; i++)
{
    myvec.pb(0);
    newvec.pb(0);
}
for(long long i = start; i <= 1000; i++)
{
    sum = num = 0;
    while(sum < sec || sum < fst || num)
    {
        num += (myvec[sum] + newvec[sum]);
        num /= i;
        sum++;
    }
    ans = max(ans, sum);
}
cout<<ans<<endl;


return 0;}