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

int n, m, pos, neg, length;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
{
  int xs; cin>>xs;
  if(xs > 0)
    ++pos;
  else
    ++neg;
}
while(m--)
{
  int a, b; cin>>a>>b;
  length = b-a+1;
  if(length&1)
    cout<<0<<endl;
  else
  {
    if(pos >= length/2 && neg >= length/2)
      cout<<1<<endl;
    else
      cout<<0<<endl;
  }
}


return 0;}