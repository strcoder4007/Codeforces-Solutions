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
typedef long long LL;
using namespace std;

int n, sum, found[5010];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  int xs; cin>>xs;
  ++found[xs];
}
for(int i = 1; i < 5010; i++)
{
  if(n < i && found[i] > 0)
    sum += found[i];
  else if(found[i] > 1)
    sum+= found[i]-1;
}
cout<<sum<<endl;

return 0;}