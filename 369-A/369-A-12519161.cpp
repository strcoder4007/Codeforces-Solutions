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
typedef unsigned long long LL;

using namespace std;

int n, b, p, cnt;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

cin>>n>>b>>p;
for(int i = 0; i < n; i++)
{
  int xs;
  cin>>xs;
  if(xs == 1)
  {
    if(b > 0)
      --b;
    else
      ++cnt;
  }
  else
  {
      if(p == 0)
      {
        if(b == 0)
          ++cnt;
        else
          --b;
      }
      else
        --p;
  }
}
cout<<cnt<<endl;
}