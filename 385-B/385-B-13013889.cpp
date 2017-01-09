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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define pow_seven 10000000
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;
using namespace std;

long l,r;
string st;
long ans;
long fl;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>st;
for (long i=0;i+3<st.size();i++)
{
  fl=0;
  for (int j=i;j+3<st.size();j++)
  {
    if (st[j]=='b'&&st[j+1]=='e'&&st[j+2]=='a'&&st[j+3]=='r')
      fl=1;
    if (fl)
      ++ans;
  }
}
cout<<ans<<endl;


return 0;}