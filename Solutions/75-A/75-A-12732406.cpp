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

int x, y, z, szs, szt, szu;
string s, t, u;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>s>>t;
  x = atoi(s.c_str());
  y = atoi(t.c_str());
  z = x+y;
  stringstream convert;
  convert<<z;
  u = convert.str();
  szs = s.size();
  szt = t.size();
  szu = u.size();
  for(int i = 0; i < u.size(); i++)
    if(u[i] == '0')
      u[i] = 'a';
  for(int i = 0; i < s.size(); i++)
    if(s[i] == '0')
      s[i] = 'a';
  for(int  i = 0; i < t.size(); i++)
    if(t[i] == '0')
      t[i] = 'a';
  string a = "", b = "", c = "";
  for(int i = 0; i < szu; i++)
    if(u[i] != 'a')
      c += u[i];
  for(int i = 0; i < szs; i++)
    if(s[i] != 'a')
      a += s[i];
  for(int i = 0; i < szt; i++)
    if(t[i] != 'a')
      b += t[i];
  x = atoi(a.c_str());
  y = atoi(b.c_str());
  z = atoi(c.c_str());
  if(x+y == z)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

  return 0;
}