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

string ary[10];
int row, col, cnt;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

for(int i = 0; i < 8; i++)
  cin>>ary[i];
for(int i = 0; i < 8; i++)
{
    row = 0, col = 0;
    for(int j = 0; j < 8; j++)
    {
      if(ary[i][j] == 'B')
        ++row;
      if(ary[j][i] == 'B')
        ++col;
    }
    if(row == 8)
      ++cnt;
    if(col == 8)
      ++cnt;
}
if(cnt == 16)
  cnt >>= 1;
cout<<cnt<<endl;

return 0;}