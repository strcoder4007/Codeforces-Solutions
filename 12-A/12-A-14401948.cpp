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

char ary[5][5];
int cnt;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

for(int i = 1; i <= 3; i++)
  for(int j = 1; j <= 3; j++)
    cin>>ary[i][j];
for(int i = 1; i <= 3; i++)
  for(int j = 1; j <= 3; j++)
    if(ary[i][j] != ary[4-i][4-j])
      ++cnt;
if(cnt)
     cout<<"NO"<<endl;
else
  cout<<"YES"<<endl;

return 0;}