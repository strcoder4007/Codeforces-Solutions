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

int n, t;
char ary[301][301];
bool b[301][301];


int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      cin>>ary[i][j];
  char init = ary[1][1];
  for(int i = 1; i <= n; i++)
  {
    if(ary[i][i] != init)
    {
      cout<<"NO"<<endl;
      cerr<<"3"<<endl;
      return 0;
    }
    if(ary[n-i+1][i] != init)
    {
      cout<<"NO"<<endl;
      cerr<<"2"<<endl;
      return 0;
    }
    b[i][i] = b[n-i+1][i] = true;
  }
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      if(b[i][j] == false)
      {
        if(t == 0)
          t = ary[i][j];
        else if(ary[i][j] != t)
        {
          cout<<"NO"<<endl;
          cerr<<i<<" "<<j<<endl;
          return 0;
        }
      }
  if(init != t)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}