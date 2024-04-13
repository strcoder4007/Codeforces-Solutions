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

int q, len, ary[100010], sum[100010], l, r;
string s;


int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>s>>q;
  ary[0] = 0;
  len = s.size();
  for(int i = 0; i< len-1; i++)
  {
    if(s[i] == s[i+1])
      ary[i+1] = 1;
    else
      ary[i+1] = 0;
  }
  sum[0] = ary[0];
  for(int i = 1; i < len; i++)
    sum[i] = ary[i]+sum[i-1];
  while(q--)
  {
    cin>>l>>r;
    --l, --r;
    cout<<sum[r]-sum[l]<<endl;
  }

  return 0;
}