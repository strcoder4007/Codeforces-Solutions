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

int n, cnt, ans, found[3001];
set<int>myset;
bool inwhile;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 2; i <= n; i++)
{
  if(!found[i])
    myset.insert(i);
  for(int j = i; j <= n; j+= i)
    found[j] = 1;
}
set<int>::iterator ii;
for(int i = 2; i <= n; i++)
{
  cnt = 0;
  int xs = i;
  for(ii = myset.begin(); ii != myset.end(); ii++)
  {
    inwhile = false;
    while(xs%(*ii) == 0)
      xs /= (*ii), inwhile = true;
    if(inwhile)
      ++cnt;
  }
  if(cnt == 2)
    ++ans;
}
cout<<ans<<endl;

return 0;}