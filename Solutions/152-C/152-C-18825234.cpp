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

long long n, m, cnt, ans, found[30];
string ary[110];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(long long i = 0; i < n; i++)
    cin>>ary[i];
ans = 1;
for(long long j = 0; j < m; j++)
{
    cnt = 0;
    memset(found, 0, sizeof found);
    for(long long i = 0; i < n; i++)
        ++found[ary[i][j]-64];
    for(long long i = 0; i <= 26; i++)
        if(found[i])
            ++cnt;
    ans = (ans*cnt)%MOD;
}
cout<<ans<<endl;


return 0;}