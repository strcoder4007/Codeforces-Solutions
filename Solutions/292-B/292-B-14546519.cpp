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

int n, m, found[100010], ones, twos, maxx;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 0; i < m; i++)
{
    int x, y;
    cin>>x>>y;
    ++found[x];
    ++found[y];
}
for(int i = 0; i < 100010; i++)
{
    if(found[i] == 1)
      ++ones;
    if(found[i] == 2)
      ++twos;
    maxx = max(maxx, found[i]);
}
if(ones == 2 && twos == n-2)
  cout<<"bus topology"<<endl;
else if(ones == n-1 && maxx == n-1)
  cout<<"star topology"<<endl;
else if(twos == n)
  cout<<"ring topology"<<endl;
else
  cout<<"unknown topology"<<endl;


return 0;}