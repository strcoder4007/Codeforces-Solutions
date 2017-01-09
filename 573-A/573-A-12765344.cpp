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

int n, er, ar[1<<20];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for (int i=1;i<=n;i++)
  {
      cin>>ar[i];
      while (ar[i]%2==0)
          ar[i]/=2;
      while (ar[i]%3==0)
          ar[i]/=3;
  }

  for (int i=2;i<=n;i++)
      if (ar[i]!=ar[1])
          er=1;

  if (er)
      cout<<"No"<<endl;
  else
      cout<<"Yes"<<endl;

  return 0;
}