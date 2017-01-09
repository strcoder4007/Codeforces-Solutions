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

string s, t, extra, strn;
int sze, szs, szt, sz, i;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>strn;
  sz = strn.size();
  i = 0; s = "", t = "";
  while(strn[i] != '|')
  {
    s += strn[i];
    i++;
  }
  ++i;
  while(strn[i])
  {
    t += strn[i];
    i++;
  }
  cin>>extra;
  szs = s.size();
  szt  =t.size();
  sze = extra.size();
  if(szs < szt)
  {
    if((szs+szt+sze)%2 == 0 && (sze >= szt-szs))
    {
      int limit = (szs+szt+sze)/2 - szs;
      for(int ii = 0; ii < limit; ii++)
        s += extra[ii];
      for(int ii = limit; ii < sze; ii++)
        t += extra[ii];
      cout<<s<<"|"<<t<<endl;
      return 0;
    }
    else
    {
      cout<<"Impossible"<<endl;
      return 0;
    }
  }
  else if(szs > szt)
  {
    if((szs+szt+sze)%2 == 0 && (sze >= szs-szt))
    {
      int limit = (szs+szt+sze)/2 - szt;
      for(int ii = 0; ii < limit; ii++)
        t += extra[ii];
      for(int ii = limit; ii < sze; ii++)
        s += extra[ii];
      cout<<s<<"|"<<t<<endl;
      return 0;
    }
    else
    {
      cout<<"Impossible"<<endl;
      return 0;
    }
  }
  else
  {
    if(sze&1)
    {
      cout<<"Impossible"<<endl;
      return 0;
    }
    else
    {
      for(int ii = 0; ii < sze/2; ii++)
        s += extra[ii];
      for(int ii = sze/2; ii < sze; ii++)
        t += extra[ii];
      cout<<s<<"|"<<t<<endl;
      return 0;
    }
  }
}