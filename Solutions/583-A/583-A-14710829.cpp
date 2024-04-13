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

int n;
vector<int>myvec;
int ary[51][51][5];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;

for(int i = 1; i <= n*n; i++)
{
  int x, y;
  cin>>x>>y;
  if(ary[x][y][0] == 0 && ary[x][y][1] == 0 && ary[x][y][1] == 0 && ary[x][y][3] == 0)
  {
    myvec.pb(i);
    for(int k = 1; k <= n; k++)
      ary[k][y][0] = 1, ary[k][y][2] = 1,  ary[x][k][1] = 1, ary[x][k][3] = 1;
  }
}
for(int i = 0; i < myvec.size(); i++)
  cout<<myvec[i]<<" ";
cout<<endl;

return 0;}