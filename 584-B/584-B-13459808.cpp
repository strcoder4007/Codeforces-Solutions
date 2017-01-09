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

int n;

long long power(int a, int b)
{
  long long res = a;
  for(int i = 1; i < b; i++)
    res = (a*res)%MOD;
  return res;
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
long long res = power(3, 3*n);
long long deno = power(7, n);
res -= deno;
if(res < 0)
  res += MOD;
cout<<res<<endl;

return 0;}