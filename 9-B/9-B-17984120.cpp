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

#define eps 1e-10
long long n, v1, v2, x1, y1, ary[100010], idx;
long double minn, dist;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>v1>>v2;
for(long long i = 0; i < n; i++)
    cin>>ary[i];
cin>>x1>>y1;
minn = 1e18;
for(long long i = 1; i < n; i++)
{
    dist = ary[i]/double(v1) + sqrt((ary[i]-x1)*(ary[i]-x1)+(y1*y1))/double(v2);
    if(dist < minn+eps)
        minn = dist, idx = i+1;
}
cout<<idx<<endl;

return 0;}