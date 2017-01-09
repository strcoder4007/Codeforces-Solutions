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

LL n, found[5], cnt;
string s; 

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>s;
for(int i = 0; i < s.size(); i++)
  if(s[i] == 'A')
    ++found[1];
  else if(s[i] == 'I')
    ++found[2];
  else
    ++found[3];
for(int i = 0; i < s.size(); i++)
{
  if(s[i] == 'A')
  {
    if(found[2] == 0 && ((found[1]-1) > 0 || found[3] > 0))
      ++cnt;
  }
  else if(s[i] == 'I')
  {
    if(found[2]-1 == 0 && (found[1] > 0 || found[3] > 0))
      ++cnt;
  }
}
cout<<cnt%MOD<<endl;

return 0;}