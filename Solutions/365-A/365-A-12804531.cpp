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
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;

using namespace std;

int n, k, found[11], cnt;
string s;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>k;
for(int i = 0; i < n; i++)
{
  memset(found, 0, sizeof(found));
  cin>>s;
  for(int j = 0; j < s.size(); j++)
    found[s[j]-'0'] = 1;
  for(int xs = 0;  xs <= k; xs++)
  {
    if(!found[xs])
      break;
    if(xs == k && found[k])
      ++cnt;
  }
}
cout<<cnt<<endl;

return 0;}