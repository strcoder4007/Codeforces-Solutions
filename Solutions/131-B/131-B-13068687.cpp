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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define pow_seven 10000000
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
using namespace std;

long long n, found[21], sum;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  int xs; cin>>xs;
  if(xs < 0)
    xs  = 10-xs;
  ++found[xs];
}
for(int i = 1; i <= 10; i++)
  if(found[i])
    sum += found[i]*found[10+i];
sum += found[0]*(found[0]-1)/2;
cout<<sum<<endl;
return 0;}