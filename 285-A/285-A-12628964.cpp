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

int n, k;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>k;

  if(k==0)
  {
      for(int i=1;i<=n;i++)cout<<i<<" ";
      cout<<"\n";
      return 0;
  }

  cout<<n<<" ";
  for(int i=n-1;i>n-k;i--)
  {
      cout<<i<<" ";
  }
  for(int i=1;i<= n-k;i++)
  {
      cout<<i<<" ";
  }
  cout<<"\n";

  return 0;
}