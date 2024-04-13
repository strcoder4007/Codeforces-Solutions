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

int n, m;
string str;

int main(){
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
int limit = min(n, m);
n -= limit, m -= limit;
if(n > 0)
  str = "BG";
else
  str = "GB";
for(int i = 0; i < limit; i++)
  cout<<str;
if(n > 0)
  for(int i = 0; i < n; i++)
    cout<<'B';
else
  for(int i =  0; i <  m; i++)
    cout<<'G';
cout<<endl;

return 0;}