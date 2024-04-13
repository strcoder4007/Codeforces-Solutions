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

LL n, k, f,t, maxx;


int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>k;
  maxx = -2000000000;
 for(int i  = 0; i < n; i++)
 {
   cin>>f>>t;
   t -= k;
   if(t > 0)
     f -= t;
   if(maxx < f)
    maxx = f;
  }
  cout<<maxx<<endl;
}