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
#define endl "\n"
typedef long long LL;

using namespace std;

int operate[5][5];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  for(int i = 0; i < 5; i++)
    for(int j = 0; j < 5; j++)
      operate[i][j] = 1;

  for(int i = 1; i <= 3; i++)
    for(int j = 1; j <= 3; j++)
    {
      int xs; cin>>xs;
      if(xs&1)
      {
        operate[i][j+1] ^= 1;
        operate[i-1][j] ^= 1;
        operate[i][j-1] ^= 1;
        operate[i+1][j] ^= 1;
        operate[i][j] ^= 1;
      }
    }

  for(int i = 1; i <= 3; i++)
  {
    for(int j = 1; j <= 3; j++)
      cout<<operate[i][j];
    cout<<endl;
  }
  cout<<endl;
  return 0;
}