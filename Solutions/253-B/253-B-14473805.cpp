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
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

long n,q,r,ans;
vector<long> v;

int main(){
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=1;i<=n;i++)
{
    cin>>q;
    v.push_back(q);
}
sort(v.begin(),v.end());
r=0;
for (int i=0;i<v.size();i++)
{
    while (r+1 < v.size() && v[r+1] <= 2*v[i])
    ++r;
    ans=max(ans,r-i+1);
}
cout<<n-ans<<endl;

return 0;}