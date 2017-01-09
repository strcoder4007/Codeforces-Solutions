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

int k, ary[12], sum, cnt;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>k;
  for(int i = 0; i < 12; i++)
    cin>>ary[i];

  sort(ary, ary+12);
  for(int i = 11; i >= 0; i--)
  {
    if(sum >= k)
    {
      cout<<cnt<<endl;
      return 0;
    }
    sum += ary[i];
    ++cnt;
    if(sum >= k)
    {
      cout<<cnt<<endl;
      return 0;
    }
  }

  cout<<-1<<endl;
  return 0;
}