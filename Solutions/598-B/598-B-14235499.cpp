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

string s, t, s2;
int m, l, r, k, diff;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s>>m;
while(m--)
{
  cin>>l>>r>>k;
  --l, --r;
  diff = r-l+1;
  k %= diff;
  t = "", s2 = "";
  for(int i = l; i <= r; i++)
    t += s[i], s2 += s[i];
  for(int i = 0; i < diff; i++)
  {
    int idx = (i-k)%diff;
    if(idx < 0)
      idx += diff;
    t[i] = s2[idx];
  }
  for(int i = l; i <= r; i++)
    s[i] = t[i-l];
}
cout<<s<<endl;

return 0;}