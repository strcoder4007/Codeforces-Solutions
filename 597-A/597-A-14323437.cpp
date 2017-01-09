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

long long k, a, b, res, res2;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>k>>a>>b;
if(a < 0 && b < 0)
{
  res = b/k;
  res -= a/k;
  if(b%k == 0)
    ++res;
  cout<<res<<endl;
}
else if(a >= 0 && b >= 0)
{
  res = b/k;
  res -= a/k;
  if(a %k == 0)
    ++res;
  cout<<res<<endl;
}
else
{
  res = b/k;
  res -= a/k;
  cout<<res+1<<endl;
}



return 0;}