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
typedef unsigned long long LL;

using namespace std;

int n, k, l, c, d, p, nl, np, drink, salt, lime;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  if(n == 1 || n == 2)
    cout<<1<<endl<<1<<endl;
  else if(n == 3)
    cout<<2<<endl<<1<<" "<<3<<endl;
  else
  {
    cout<<n<<endl;
  for(int i = n; i > 0; i--)
  {
    if(i&1)
      cout<<i<<" ";
  }
  for(int i = n; i > 0; i--)
  {
    if(!(i&1))
      cout<<i<<" ";
  }
  cout<<endl;
}
}