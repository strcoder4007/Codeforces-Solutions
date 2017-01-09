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
int cnt, sfound[27], tfound[27];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s>>t;
int szs = s.size();
int szt = t.size();
if(szs != szt)
{
  cout<<"NO"<<endl;
  return 0;
}
for(int i = 0; i < szs; i++)
  ++sfound[s[i]-96];
for(int i = 0; i < szt; i++)
  ++tfound[t[i]-96];
for(int i = 1; i <= 26; i++)
  if(sfound[i] != tfound[i])
  {
    cout<<"NO"<<endl;
    return 0;
  }

for(int i = 0; i < szs; i++)
  if(s[i] != t[i])
    ++cnt;
if(cnt == 0 || cnt == 2)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;

return 0;}