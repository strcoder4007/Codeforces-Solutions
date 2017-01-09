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

int n, k, minn, sum, buff, ary[200000];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>k;
  for(int i = 0; i < n; i++)
    cin>>ary[i];
  for(int i = 0; i < k; i++)
    sum+= ary[i];
  minn = sum;
  buff = 1;
  for(int i = k; i < n; i++)
  {
    sum -= ary[i-k];
    sum += ary[i];
    if(minn > sum)
    {
      minn = sum;
      buff = i+2-k;
    }
  }
  cout<<buff<<endl;


  return 0;
}