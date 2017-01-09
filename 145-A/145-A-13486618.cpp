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

string s, t;
int cnt, counter, sz, a7, b7, a4, b4;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>s>>t;
sz = s.size();
for(int i = 0; i < sz; i++)
{
  if(s[i] == '7')
    ++a7;
  if(s[i] == '4')
    ++a4;
  if(t[i] == '7')
    ++b7;
  if(t[i] == '4')
    ++b4;
}
if(a7 < b7)
{
  int xs = 0;
  while(b7-a7 > 0)
  {
    if(s[xs] == '4' && t[xs] == '7')
      s[xs] = '7', ++a7, ++cnt;
    ++xs;
  }
}
else if(b7 < a7)
{
  int xs = 0;
  while(a7-b7 > 0)
  {
    if(t[xs] == '4' && s[xs] == '7')
      t[xs] = '7', ++b7, ++cnt;
    ++xs;
  }
}
for(int i = 0; i < sz; i++)
  if(s[i] != t[i])
    ++counter;
cout<<cnt+counter/2<<endl;

return 0;}