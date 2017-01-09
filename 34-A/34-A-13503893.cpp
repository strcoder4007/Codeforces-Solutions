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
#define LL long long
using namespace std;

int n, ary[101], minn, a, b;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
  cin>>ary[i];
minn = abs(ary[0]-ary[1]);
a = 0, b = 1;
for(int i = 0; i < n-1; i++)
  if(minn > abs(ary[i]-ary[i+1]))
    minn = abs(ary[i]-ary[i+1]), a = i, b = i+1;
if(minn > abs(ary[n-1] - ary[0]))
  minn = abs(ary[n-1] - ary[0]), a = n-1, b = 0;

cout<<a+1<<" "<<b+1<<endl;
return 0;}