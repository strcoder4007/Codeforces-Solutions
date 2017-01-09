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

int n, ary[1001], cnt, dir, rev, visited[1001];
vector<int>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
  cin>>ary[i];
int i = 1;
while(cnt != n)
{
  if(i == 1)
    rev = 0;
  if(i == n)
    rev = 1;
  if(ary[i] <= cnt && !visited[i])
  {
    ++cnt, visited[i] = 1;
    myvec.pb(i);
  }
  if(rev)
    --i;
  else
    ++i;
}
/*
for(int i = 0; i < myvec.size(); i++)
  cout<<myvec[i]<<" ";
cout<<endl;
*/
int less = 1;
for(int i = 1;  i < myvec.size(); i++)
{
  if(less)
    if(myvec[i] < myvec[i-1])
    ++dir, less = 0;
  if(!less)
    if(myvec[i] > myvec[i-1])
      ++dir, less = 1;
}
cout<<dir<<endl;

return 0;}