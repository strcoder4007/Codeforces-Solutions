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

int n, d, sum, cnt, ary[101];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>d;
  for(int i = 0; i < n; i++)
  {
    cin>>ary[i];
    sum += ary[i];
    sum += 10;
  }
  cnt = 2*(n-1);
  sum -= 10;
  while(d-sum >= 5)
  {
    sum += 5;
    ++cnt;
  }
  if(sum > d)
  {
    cout<<-1<<endl;
    return 0;
  }
  cout<<cnt<<endl;




}