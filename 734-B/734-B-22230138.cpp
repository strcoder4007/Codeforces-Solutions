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

long long a, b, c, d, num, ans;

int main(){
    //freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b>>c>>d;
num = min(a, min(c, d));
a -= num, c -= num, d -= num;
ans = num*256;
num = 0;
num += min(a, b);
ans += num*32;
cout<<ans<<endl;

return 0;}