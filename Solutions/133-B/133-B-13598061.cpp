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

string st,z;
long s,q;

long find(char a)
{
  q=0;
  while (z[q]!=a)
    ++q;
  return q+8;
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

z="><+-.,[]";
cin>>st;
for (int i=0;i<st.size();++i)
  s=s*16+find(st[i]), s%=1000003;
cout<<s<<endl;

return 0;}