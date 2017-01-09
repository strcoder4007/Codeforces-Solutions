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

int n, m;

bool isprime(int num)
{
  for(int i = 2; i < num; i++)
    if(num%i == 0)
      return false;
  return true;
}

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>m;
  for(int i = n+1;  i <= m; i++)
  {
    if(isprime(i) && i != m)
    {
      cout<<"NO"<<endl;
      return 0;
    }
    else if(isprime(i) && i == m)
    {
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;

  return 0;
}