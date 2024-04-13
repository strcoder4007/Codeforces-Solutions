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

long long sum1, sum2, n, base1, base2, m;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>base1;
for(int i = 0;  i < n; i++)
{
  int xs; cin>>xs;
  sum1 += (xs*llround(pow(base1, n-i-1)));
}
cin>>m>>base2;
for(int i = 0; i < m; i++)
{
  int xs; cin>>xs;
  sum2 += (xs*llround(pow(base2, m-i-1)));
}
if(sum1 < sum2)
  cout<<"<"<<endl;
else if(sum1 > sum2)
  cout<<">"<<endl;
else
  cout<<"="<<endl;

return 0;}