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
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

long long n, m, d, sum[200010], ans;
string st1, st2;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st1>>st2;
n = st1.size(), m = st2.size(), d = m-n;
for(int i = 0; i < m; i++)
    sum[i+1] = sum[i]+(st2[i] == '1');

for(int i = 0; i < n; i++)
{
    if(st1[i] == '0')
        ans += sum[d+1+i]-sum[i];
    else
        ans += (d+1) - (sum[d+1+i]-sum[i]);
}
cout<<ans<<endl;

return 0;}