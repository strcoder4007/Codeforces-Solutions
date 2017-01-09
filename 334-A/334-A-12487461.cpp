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

int n, extent;
bool inwhile;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 1; i <= (n*n)/2; i++)
  {
    extent = n/2;
    inwhile = false;
    while(extent != 0)
    {
      cout<<i<<" "<<n*n+1-i<<" ";
      ++i;
      --extent;
      inwhile = true;
    }
    if(inwhile)
      --i;
    cout<<endl;
  }
}