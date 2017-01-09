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

long long  hx, hy, ux, uy, found, m, res1, res2;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>hx>>hy>>ux>>uy;
cin>>m;
while(m--)
{
  int a, b, c;
  cin>>a>>b>>c;
  res1 = a*hx+b*hy+c;
  res2 = a*ux+b*uy+c;
  if(res1 < 0 && res2 > 0)
    ++found;
  if(res1 > 0 && res2 < 0)
    ++found;
}
cout<<found<<endl;

return 0;}