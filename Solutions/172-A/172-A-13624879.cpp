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

string ary[30010];
char init;
int cnt, n;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
  cin>>ary[i];
for(int i = 0; i < ary[0].size(); i++)
{
  init = ary[0][i];
  for(int j = 0; j < n; j++)
  {
    if(ary[j][i] != init)
    {
      cout<<cnt<<endl;
      return 0;
    }
  }
  ++cnt;
}
cout<<cnt<<endl;

return 0;}