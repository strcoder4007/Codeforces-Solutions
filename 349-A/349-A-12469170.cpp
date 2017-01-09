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
#define MP make_pair
#define PB push_back
#define PI 3.141592653589793
typedef unsigned long long LL;

using namespace std;

LL n, ary[100001], twenty, fifty;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 0; i < n; i++)
  {
    cin>>ary[i];
    if(ary[i] == 25)
      ++twenty;
    else if(ary[i] == 50 && twenty > 0)
    {
      ++fifty;
      --twenty;
    }
    else if(ary[i] == 100 && fifty > 0 && twenty > 0)
    {
      --twenty;
      --fifty;
    }
    else if(ary[i] == 100 && twenty > 2)
    {
      twenty -= 3;
    }
    else
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}