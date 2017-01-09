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

int n, m, cnt, max_cnt;
string ary[101];
char maxx;
bool array[101];
vector<char> myvec;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>m;
  for(int i  = 0; i < n; i++)
    cin>>ary[i];
  for(int j = 0; j < m; j++)
  {
    maxx = '0';
    for(int i =0 ; i < n; i++)
    {
      maxx = max(ary[i][j], maxx);
    }
    myvec.pb(maxx);
  }
  for(int j = 0; j < m; j++)
  {
    for(int i = 0; i< n; i++)
    {
      if(ary[i][j] == myvec[j])
      {
        array[i] = true;
      }
    }
  }
  for(int i = 0; i < n; i++)
    if(array[i] == true)
      ++cnt;
  cout<<cnt<<endl;

  return 0;
}