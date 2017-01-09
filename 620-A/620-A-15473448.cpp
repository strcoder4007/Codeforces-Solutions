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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

long long x, y, xx, yy, cnt;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>x>>y>>xx>>yy;
long long minn = min(abs(xx-x), abs(yy-y));
if(xx > x)
    x += minn;
else if(xx < x)
    x -= minn;
if(yy > y)
    y += minn;
else if(yy < y)
    y -= minn;
cnt = minn;
if(x == xx)
    cnt += abs(yy-y);
else if(y == yy)
    cnt += abs(xx-x);
cout<<cnt<<endl;

return 0;}