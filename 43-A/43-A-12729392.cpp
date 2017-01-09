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

int n, sum1, sum2;
string t1, t2;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 0; i < n; i++)
  {
    string s; cin>>s;
    if(i == 0)
    {
     t1  = s;
     ++sum1;
    }
    else
    {
      if(s == t1)
      {
        ++sum1;
      }
      else
      {
        t2 = s;
        ++sum2;
      }
    }
  }
  if(sum1 > sum2)
    cout<<t1<<endl;
  else
    cout<<t2<<endl;

  return 0;
}