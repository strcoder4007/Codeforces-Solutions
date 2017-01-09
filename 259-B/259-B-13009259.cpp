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
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;
using namespace std;

int x, y, z, ary[4][4];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

for(int i = 1; i <= 3; i++)
  for(int j = 1; j <= 3; j++)
    cin>>ary[i][j];
y = ((ary[1][2]+ary[1][3])-(ary[1][3]+ary[2][3])+(ary[3][1]+ary[1][3]))/2;
x = y+(ary[1][3]+ary[2][3])-(ary[1][2]+ary[1][3]);
z = y+(ary[1][3]+ary[2][3])- (ary[3][1]+ary[1][3]);

ary[1][1] = x;
ary[2][2] = z;
ary[3][3] = y;

for(int i = 1; i <= 3; i++)
{
  for(int j = 1; j <= 3; j++)
    cout<<ary[i][j]<<" ";
  cout<<endl;
}


return 0;}