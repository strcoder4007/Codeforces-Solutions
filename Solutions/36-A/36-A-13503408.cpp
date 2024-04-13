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

int n, one, cnt, i;
string s;
set<int>myset;

int main(){
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);

cin>>n>>s;
for(i = 0; i < n; i++)
  if(s[i] == '1')
    break;
++i;
one = 1;
while(i < n)
{
  if(s[i] == '1')
    myset.insert(cnt), cnt = 0, ++one;
  else
    ++cnt;
  ++i;
}
if(myset.size() == 1)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;

return 0;}