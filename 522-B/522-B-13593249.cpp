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

int n, w[200010], h[200010], found[200010], height;
long long sum;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  cin>>w[i]>>h[i];
  sum += w[i];
  found[i] = h[i];
}
sort(found, found+n);
for(int i = 0; i < n; i++)
{
  if(h[i] == found[n-1])
    height = found[n-2];
  else
    height = found[n-1];
  cout<<(sum-w[i])*height<<" ";
}
cout<<endl;


return 0;}