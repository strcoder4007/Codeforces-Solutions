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


long n,lwr,upr;
string st1,st;
long num;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
lwr=-2e9;
upr=2e9;
for (int i=1;i<=n;i++)
{
  cin>>st>>num>>st1;
  if (st1=="N")
  {
    if (st[0]=='<')
      st[0]='>';
    else
      st[0]='<';
    if (st.size()==1)
      st+="=";
    else
      st.erase(st.begin()+1);
  }
  if (st[1]=='=')
  {
    if (st[0]=='<')
      ++num;
    else
      --num;
  }
  if (st[0]=='<')
    upr=min(upr,num-1);
  if (st[0]=='>')
    lwr=max(lwr,num+1);
}

if (upr<lwr)cout<<"Impossible"<<endl;
else cout<<lwr<<endl;

return 0;}