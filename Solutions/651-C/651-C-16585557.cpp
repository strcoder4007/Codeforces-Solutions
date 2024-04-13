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
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

long long n, x, y, xs;
long long ans;
map<long long, long long> map1, map2;
map<pair<long long, long long>, long long> map3;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(long long i = 1 ; i <= n; i++)
{
    cin>>x>>y;
    ++map1[x], ++map2[y], ++map3[mp(x, y)];
}
map<long long, long long>::iterator i;
map<pair<long long, long long>, long long>::iterator k;
for(i = map1.begin(); i != map1.end(); i++)
    xs = (*i).S, ans += (xs*(xs-1))/2;
for(i = map2.begin(); i != map2.end(); i++)
    xs = (*i).S, ans += (xs*(xs-1))/2;
for(k = map3.begin(); k != map3.end(); k++)
    xs = (*k).S, ans -= (xs*(xs-1))/2;
cout<<ans<<endl;


return 0;}