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

long long r, g, b;
long long sum;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>r>>g>>b;
sum = r/3+g/3+b/3;
if(r>0&&g>0&&b>0)
{
  --r, --g, --b;
   sum = max(sum, r/3+g/3+b/3+1);
 }
if(r>0&&g>0&&b>0)
{
  --r, --g, --b;
  sum = max(sum, r/3+g/3+b/3+2);
}
cout<<sum<<endl;

return 0;}