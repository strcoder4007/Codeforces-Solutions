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

int n, col, sum, ary[505][505], last;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>col;

for(int i = 1; i <= n; i++)
{
    int xs = 1;
    for(int j = 1; j < col; j++, xs++)
        ary[i][j] = last+xs;
    last = ary[i][col-1];
}

for(int i = 1; i <= n; i++)
{
    int xs = 1;
    for(int j = col; j <= n; j++, xs++)
        ary[i][j] = last+xs;
    last = ary[i][n];
}

for(int i = 1; i <= n; i++)
    sum += ary[i][col];
cout<<sum<<endl;

for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= n; j++)
        cout<<ary[i][j]<<" ";
    cout<<endl;
}

return 0;}