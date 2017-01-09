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

string s, t, u;
int cnt1, cnt2, cnt3, flag;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

getline(cin, s);
getline(cin, t);
getline(cin, u);

for(int i = 0; i < s.size(); i++)
  if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    ++cnt1;
for(int i = 0; i < t.size(); i++)
  if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u')
    ++cnt2;
for(int i = 0; i < u.size(); i++)
  if(u[i] == 'a' || u[i] == 'e' || u[i] == 'i' || u[i] == 'o' || u[i] == 'u')
    ++cnt3;

if(cnt1 != 5 || cnt2 != 7 || cnt3 != 5)
  cout<<"NO"<<endl;
else
  cout<<"YES"<<endl;

return 0;}