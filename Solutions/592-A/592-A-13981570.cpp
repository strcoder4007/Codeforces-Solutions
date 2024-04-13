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
#include <iomanip>
#include <list>
#include <ctime>
#include <memory.h>
#include <bitset>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
#define LL long long
using namespace std;

char ary[10][10];
vector<pair<int , int> >white, black;
vector<int> whitevec, blackvec;
int w = 1000, b = 1000;
bool error;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

for(int i = 0; i < 8; i++)
  for(int j = 0; j < 8; j++)
  {
    cin>>ary[i][j];
    if(ary[i][j] == 'B')
      black.pb(mp(i, j));
    if(ary[i][j] == 'W')
      white.pb(mp(i, j));
  }

for(int i = 0; i < white.size(); i++)
{
  error = false;
  for(int j = 0; j <= white[i].F; j++)
  {
    if(ary[j][white[i].S] == 'B')
    {
      error = true;
      break;
    }
  }
  if(!error)
    whitevec.pb(white[i].F);
}
for(int i = 0; i < black.size(); i++)
{
  error = false;
  for(int j = 7; j >= black[i].F; j--)
  {
    if(ary[j][black[i].S] == 'W')
    {
      error = true;
      break;
    }
  }
    if(!error)
      blackvec.pb(7-black[i].F);
}


for(int i = 0; i < whitevec.size(); i++)
  w = min(w, whitevec[i]);
for(int i = 0;i < blackvec.size(); i++)
  b = min(b, blackvec[i]);


if(w <= b)
  cout<<"A"<<endl;
else
  cout<<"B"<<endl;

return 0;}