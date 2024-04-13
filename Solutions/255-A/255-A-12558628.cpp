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

int n, ary[4];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 1; i <= n; i++)
  {
    int xs;cin>>xs;
    if(i%3 == 1)
      ary[1] += xs;
    else if(i%3 == 2)
      ary[2] += xs;
    else
      ary[3] += xs;
  }
  int ans = max_element(ary, ary+4)-ary;
  if(ans == 1)
    cout<<"chest"<<endl;
  else if(ans == 2)
    cout<<"biceps"<<endl;
  else
    cout<<"back"<<endl;

  return 0;
}