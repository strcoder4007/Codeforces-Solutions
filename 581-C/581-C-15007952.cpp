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
#define int long long
int n, k, ary[100010], ans, sum, last;
vector<int>myvec;
vector<pair<int, int> >newvec;

main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>k;
for(int i = 0; i < n; i++)
{
    cin>>ary[i];
    if(ary[i]%10 != 0)
        myvec.pb(((ary[i]/10+1)*10)-ary[i]);
    else
        myvec.pb(10);
}
for(int i = 0; i < n; i++)
    newvec.pb(mp(myvec[i], ary[i]));
sort(newvec.begin(), newvec.end());

/*
for(int i = 0; i  < n; i++) cout<<newvec[i].F<<" "<<newvec[i].S<<endl;
*/

for(int i = 0; i < n; i++)
{
    if(k >= newvec[i].F && newvec[i].S < 100)
    {
        k -= newvec[i].F;
        int calc = newvec[i].S/10+1;
        ans += calc;
        newvec[i].S = calc*10;
    }
    else
      ans += newvec[i].S/10;
    sum += newvec[i].S;
    last = newvec[i].F;
}
int i = 0;
while(sum < n*100 && k >= 10)
{
    while(k >= 10 && newvec[i].S < 100 && sum < n*100)
    {
        ++ans;
        newvec[i].S += 10;
        k-= 10;
        sum += 10;
    }
    ++i;
}

cout<<ans<<endl;

}