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

int n, m, mini, maxx, res, buff;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
if(n == 0 && m == 0)
  cout<<"0 0"<<endl;
else if(n == 0)
  cout<<"Impossible"<<endl;
else if(n == 1)
{
  if(m > 1)
    cout<<m<<" "<<m<<endl;
  else
    cout<<1<<" "<<1<<endl;
}
else if(m <= n)
{
  mini = n;
  if(m > 1)
    maxx += m;
  else
    ++maxx;
  maxx += n-1;
  cout<<mini<<" "<<maxx<<endl;
}
else
{
  res = m/n;
  buff = m;
  if(res > 1)
  {
    mini += res*(n-1);
    buff -= mini;
    if(buff > 1)
      mini += buff;
    else
      ++mini;
  }
  else
    mini += m;
  maxx = n-1;
  if(m > 1)
    maxx += m;
  else
    ++maxx;
  cout<<mini<<" "<<maxx<<endl;
}

return 0;}