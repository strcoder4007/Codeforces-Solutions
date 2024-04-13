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

int n, found[30], cnt;
string ns;
set<int>myset;

bool check(int num)
{
  stringstream convert;
  convert<<num;
  string strn = convert.str();
  for(int i = 0; i < strn.size(); i++)
    if(found[strn[i]-48] == 1)
      return true;
  return false;
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
stringstream convert;
convert<<n;
ns = convert.str();
for(int i = 0; i < ns.size(); i++)
  found[ns[i]-48] = 1;
for(int i = 1; i*i <= n; i++)
  if(n%i == 0)
    myset.insert(i), myset.insert(n/i);
for(set<int>::iterator ii = myset.begin(); ii != myset.end(); ii++)
  if(check(*ii))
    ++cnt;
cout<<cnt<<endl;

return 0;}