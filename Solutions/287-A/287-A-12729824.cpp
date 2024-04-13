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
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;

using namespace std;

char ary[5][5];
int found[100];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  for(int i = 0; i < 4; i++)
    for(int j = 0; j < 4; j++)
      cin>>ary[i][j];
  for(int i = 0; i < 4; i++)
    for(int j = 0; j < 4; j++)
    {
      memset(found, 0, sizeof(found));
      if(ary[i][j] == '#')
      {
       ++found[ary[i][j+1]];
       ++found[ary[i+1][j+1]];
       ++found[ary[i+1][j]];
       if(found['#'] == 3 || (found['#'] == 2 && found['.'] == 1) || found['.'] == 3)
       {
         cout<<"YES"<<endl;
         return 0;
       }
     }

      else if(ary[i][j] == '.')
      {
        ++found[ary[i][j+1]];
        ++found[ary[i+1][j+1]];
        ++found[ary[i+1][j]];
        if(found['.'] == 3 || (found['.'] == 2 && found['#'] == 1) || found['#'] ==3)
        {
          cout<<"YES"<<endl;
          return 0;
        }
      }
    }
    cout<<"NO"<<endl;
  return 0;
}