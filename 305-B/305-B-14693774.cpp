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

long long a,b,p,q;
vector<long long> v,v1;
long long n,t;

long long good()
{if (v.size()!=v1.size())return false;
for (int i=0;i<v.size();i++)
if (v[i]!=v1[i])return false;
return true;}

void solve(long long a,long long b)
{
     if (a==0||b==0)return;
     v1.push_back(a/b);
     a%=b;
     solve(b,a);
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>p>>q;
cin>>n;
for (int i=1;i<=n;i++)
{
    cin>>t;v.push_back(t);
}
if (v.size()>1&&v[n-1]==1)
{
 v.erase(v.end()-1);
 --n;v[n-1]++;
}
solve(p,q);

if (good())cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;}