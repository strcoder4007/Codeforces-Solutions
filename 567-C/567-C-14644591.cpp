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
#define int long long

int n, k, num1, num2, ary[200010];
long long ans;
map<long long, long long> lt, rt;

main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
for(int i = 0; i < n; i++)
{
  cin>>ary[i];
  rt[ary[i]]++;
}
for(int i = 0; i < n; i++)
{
  num1 = num2 = 0;
  if(ary[i]%k == 0)
    num1 = lt[ary[i]/k];
  rt[ary[i]]--;
  num2 = rt[ary[i]*k];
  ans += num1*num2;
  lt[ary[i]]++;
}
cout<<ans<<endl;

}