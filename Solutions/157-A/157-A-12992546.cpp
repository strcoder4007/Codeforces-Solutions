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
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define INT_MAX 1e4+1
typedef long long LL;
using namespace std;

int n, hori, verti, ary[31][31], cnt;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
  for(int j = 0; j < n; j++)
    cin>>ary[i][j];

for(int i = 0; i < n; i++)
{
  for(int j = 0; j < n; j++)
  {
    hori = 0, verti = 0;
    for(int x = 0; x < n; x++)
      hori += ary[i][x];
    for(int y = 0; y < n; y++)
      verti += ary[y][j];
    if(verti > hori)
      cnt++;
  }
}
cout<<cnt<<endl;

return 0;}