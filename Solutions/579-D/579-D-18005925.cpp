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

long long n, k, x, ary[200010], lft[200010], rht[200010], ans, multi;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k>>x;
multi = 1;
for(long long i = 1; i <= n; i++)
    cin>>ary[i];
while(k--)
    multi *= x;
for(long long i = 1; i <= n; i++)
    lft[i] = lft[i-1]|ary[i];
for(long long i = n; i; i--)
    rht[i] = rht[i+1]|ary[i];
for(long long i = 1; i <= n; i++)
    ans = max(ans, lft[i-1]|(ary[i]*multi)|rht[i+1]);
cout<<ans<<endl;

return 0;}