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

int n, ii;
vector<int>myvec, newvec, vec;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
    if (n&1)
      return cout<<-1, 0;
    for(int i = 0; i < n; i+= 2)
        cout<<i+2<<' '<<i+1<<' ';

  return 0;
}