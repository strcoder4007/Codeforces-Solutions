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

int n, ary1[100001], ary2[100001], ary3[100001];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 0; i < n; i++)
    cin>>ary1[i];
  for(int i = 0; i < n-1; i++)
    cin>>ary2[i];
  for(int i = 0; i < n-2; i++)
    cin>>ary3[i];
  sort(ary1, ary1+n);
  sort(ary2, ary2+n-1);
  sort(ary3, ary3+n-2);
  ary2[n-1] = -1;
  ary3[n-1] = -1;
  ary3[n-2] = -2;
  for(int i = 0; i < n; i++)
  {
    if(ary1[i] != ary2[i])
    {
      cout<<ary1[i]<<endl;
      break;
    }
  }
  for(int i = 0; i < n; i++)
  {
    if(ary2[i] != ary3[i])
    {
      cout<<ary2[i]<<endl;
      return 0;
    }
  }
}