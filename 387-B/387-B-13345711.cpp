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
using namespace std;

int n, m, ary1[3001], ary2[3001], found2[1000010], ans;
bool found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>m;
for(int i = 0; i < n; i++)
  cin>>ary1[i];
for(int i = 0; i < m; i++)
  cin>>ary2[i];
for(int i = 0; i < n; i++)
{
  found = false;
  for(int j = 0; j < m; j++)
    if(!found2[j] && ary1[i] <= ary2[j] && !found)
      found2[j] = 1, found = true;
  if(!found)
    ++ans;
}
cout<<ans<<endl;


return 0;}