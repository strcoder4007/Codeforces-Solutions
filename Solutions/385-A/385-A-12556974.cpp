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

int n, cost, ary[101], maxx;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>cost;
  for(int i = 0; i < n; i++)
    cin>>ary[i];
  for(int i = 0; i < n-1; i++)
  {
    int temp = ary[i]-cost-ary[i+1];
    if(temp > maxx)
      maxx = temp;
  }
  cout<<maxx<<endl;
  return 0;
}