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

string s, ans;
int n;

bool ispal(string xs)
{
  string newxs;
  for(int i = xs.size()-1; i >= 0; i--)
    newxs += xs[i];
  for(int i = 0; i < xs.size(); i++)
    if(xs[i] != newxs[i])
      return false;
  return true;
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>s;
n=s.size();
ans=s[0];
for (int mask=0; mask < (1<<n); mask++)
{
  string temp="";
  for(int i = 0; i < n; i++)
    if(mask&(1<<i))
      temp+=s[i];
  if(ispal(temp))
    if (temp>ans)
      ans=temp;
}
cout<<ans<<endl;

return 0;}