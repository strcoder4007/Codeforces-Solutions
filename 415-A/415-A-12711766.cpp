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

int n, m, off[102];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>m;
  for(int i = 0; i < m; i++)
  {
    int xs; cin>>xs; --xs;
    for(int j = xs; j < n; j++)
      if(off[j] == 0)
        off[j] = xs+1;
  }
  for(int i = 0; i < n; i++)
    cout<<off[i]<<" ";
  cout<<endl;

  return 0;
}