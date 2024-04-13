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

int n, k, cnt, ans, sz;
string s;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>k;
  for(int i = 0; i < n; i++)
  {
    cin>>s;
    cnt = 0;
    sz = s.size();
    for(int j = 0; j < sz; j++)
    {
      if(s[j] == '4' || s[j] == '7')
        ++cnt;
    }
    if(cnt <= k)
      ++ans;
  }
  cout<<ans<<endl;

  return 0;
}