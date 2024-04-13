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

int n, ary[101], a, b;



int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 0; i < n-1; i++)
    cin>>ary[i];
  for(int i = 1; i < n-1; i++)
    ary[i] += ary[i-1];
  cin>>a>>b;
  cout<<ary[b-2]-ary[a-2]<<endl;
  return 0;
}