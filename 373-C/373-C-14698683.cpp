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

long n,q,fu,ans;
vector<long> v;
long used[1000000];
long l,r,m,flag;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=1;i<=n;i++)
{
    cin>>q;
    v.push_back(q);
}
sort(v.begin(),v.end());
l=0;
r=n/2;
while (l<r)
{
  m=l+r+1;
  m/=2;
  flag=0;
  for(int i = 0; i < m; i++)
    if(v[i]*2 > v[v.size()-m+i])
      flag=1;
  if (flag)
    r=m-1;
  else
    l=m;
}

cout<<n-l<<endl;

return 0;}