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
#include <stdlib.h>
#include <climits>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define M_pi 3.141592653589793
#define endl "\n"
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

long long n, closix, closd, reqix;
pair<long long, long long> pts[100010];

long long distsq(pair<long long, long long> a, pair<long long, long long> b)
{
	return (a.F-b.F)*(a.F-b.F) + (a.S-b.S)*(a.S-b.S);
}
long long area(pair<long long, long long> a, pair<long long, long long> b, pair<long long, long long> c)
{
    long long x1=a.F,x2=b.F,x3=c.F;
    long long y1=a.S,y2=b.S,y3=c.S;
    return (abs(x3*(y2-y1) - y3*(x2-x1) + x2*y1 - y2*x1));
}

int main(){
//freopen("input.txt", "r", stdin);
//ios_base::sync_with_stdio(0);
//cin.tie(0);

cin>>n;
for(int i = 1;i <= n; i++)
    cin>>pts[i].F>>pts[i].S;
closix=0, closd = 9*(1e18);
for(int i = 2; i <= n; i++)
{
    long long dsq = distsq(pts[1],pts[i]);
    if(dsq<closd)
        closd = dsq, closix  = i;
}
closd = 9*(1e18), reqix=0;
for(int i = 2; i <= n; i++)
{
    long long areat = area(pts[1],pts[closix],pts[i]);
    if(areat < closd && areat!=0)
        reqix = i, closd = areat;
}
cout<<"1 "<<closix<<" "<<reqix<<endl;


return 0;}