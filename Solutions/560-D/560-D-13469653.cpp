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
using namespace std;

string s, t, ss, tt;

string disect(string xs)
{
  if(xs.size()&1)  return xs;
  string first, second;
  int sz = xs.size()/2;
  for(int i = 0; i < sz; i++)
    first+=xs[i], second+=xs[sz+i];
  first = disect(first);
  second = disect(second);
  if(first < second)
    return first+second;
  else
    return second+first;
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>s>>t;
ss = disect(s);
tt = disect(t);
if(ss == tt)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;

return 0;}