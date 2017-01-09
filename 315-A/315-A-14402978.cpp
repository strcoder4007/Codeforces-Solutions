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

long long n,a[100000],b[100000],ans,fl[10000];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
  cin>>a[i]>>b[i];
for(int i=1;i<=n;i++)
  for (int j=1;j<=n;j++)
    if (i-j)
      if (b[j]==a[i])
        fl[i]=1;
for (int i=1;i<=n;i++)
  ans+=fl[i];
cout<<n-ans<<endl;

return 0;}