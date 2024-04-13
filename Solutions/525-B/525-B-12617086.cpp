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
typedef long long LL;

using namespace std;

int m, ary[200010], sz;
string s;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>s>>m;
  sz = s.size();
  while(m--)
  {
    int xs;cin>>xs;
    ++ary[xs-1];
    --ary[sz-xs+1];
  }
  for(int i = 1; i < sz; i++)
    ary[i] += ary[i-1];
  for(int i = 0; i < sz/2; i++)
  {
    if(ary[i]&1)
      swap(s[i], s[sz-i-1]);
  }
  cout<<s<<endl;
  return 0;
}