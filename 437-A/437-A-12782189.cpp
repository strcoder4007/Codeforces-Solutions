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

string junk, s;
pair<int, pair<string, string> >ary[4];
int found[5], sum, idx;
char alpha[5] = {'z', 'A', 'B', 'C', 'D'};

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

for(int i = 0; i < 4; i++)
{
  cin>>s;
  junk = "";
  for(int j = 0; j < 2; j++)
    junk += s[j];
  s.erase(0, 2);
  ary[i] = mp(s.size(), mp(s, junk));
}
sort(ary, ary+4);

if(2*ary[0].F <= ary[1].F && 2*ary[0].F <= ary[2].F && 2*ary[0].F <= ary[3].F)
  found[ary[0].S.S[0]-64] = 1;
if(ary[3].F >= 2*ary[0].F && ary[3].F >= 2*ary[1].F && ary[3].F >= 2*ary[2].F)
  found[ary[3].S.S[0]-64] = 1;
for(int i = 1; i < 5; i++)
{
  sum += found[i];
  if(found[i] == 1)
    idx = i;
}
if(sum == 1)
  cout<<alpha[idx]<<endl;
else
  cout<<"C"<<endl;

return 0;}