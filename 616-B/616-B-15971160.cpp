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
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

int ary[110][110], n, m, minn, maxx;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
minn = INT_MAX;
maxx=  -1;
for(int i = 0; i < n; i++)
{
    minn = INT_MAX;
    for(int j = 0; j <m; j++)
    {
        cin>>ary[i][j];
        minn = min(minn, ary[i][j]);
    }
    maxx = max(maxx, minn);
}
cout<<maxx<<endl;

return 0;}