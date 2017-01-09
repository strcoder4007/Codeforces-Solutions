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

int n, m;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  cin>>n>>m;
  if(n == 1 && m == 1)
    cout<<1<<endl;
  else
  {
  if(m <= n/2)
    cout<<m+1<<endl;
  else
    cout<<m-1<<endl;
  }
}