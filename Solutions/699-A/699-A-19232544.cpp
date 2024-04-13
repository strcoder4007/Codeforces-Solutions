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

int n, ary[200010], ans;
string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

ans = 2e9;
cin>>n>>st;
for(int i = 0; i < n; i++)
    cin>>ary[i];
for(int i = 1; i < n; i++)
    if(st[i-1] == 'R' && st[i] == 'L')
        ans = min(ans, abs(ary[i]-ary[i-1])/2);
if(ans == 2e9)
    cout<<-1<<endl;
else
    cout<<ans<<endl;

return 0;}