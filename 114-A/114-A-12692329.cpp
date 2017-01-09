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
typedef long long LL;

using namespace std;

LL k, l, power;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>k>>l;
  power = k;
  if(k == l)
  {
    cout<<"YES"<<endl<<0<<endl;
    return 0;
  }
  for(int i = 1; i < 32; i++)
  {
    if(k*power == l)
    {
      cout<<"YES"<<endl<<i<<endl;
      return 0;
    }
    else
      power = k*power;
  }
  cout<<"NO"<<endl;

  return 0;
}