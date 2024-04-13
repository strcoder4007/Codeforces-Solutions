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

int n, sum;
vector<int>row1, row2, cross, myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n-1; i++)
{
  int xs; cin>>xs;
  row1.pb(xs);
}
for(int i = 0; i < n-1; i++)
{
  int xs; cin>>xs;
  row2.pb(xs);
}
for(int i = 0; i < n; i++)
{
  int xs; cin>>xs;
  cross.pb(xs);
}

for(int i = 0; i < n; i++)
{
  sum = 0;
  for(int j = 0; j < i; j++)
    sum+=row1[j];
  sum += cross[i];
  for(int j = i; j < n-1; j++)
    sum += row2[j];
  myvec.pb(sum);
}
sort(myvec.begin(), myvec.end());
cout<<myvec[1]+myvec[0]<<endl;


return 0;}