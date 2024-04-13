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
using namespace std;

int n, cnt, r, times;
string s;
bool lfound;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>s;
for(int i = 0; i < n; i++)
{
  if(s[i] == 'R')
  {
    r = i;
    s[i] = 'x';
    lfound = false;
    for(int j = i+1; j < n; j++, i++)
    {
      if(s[j] == 'L')
      {
        s[j] = 'x';
        lfound = true;
        break;
      }
      s[j] = 'x';
    }
    ++i;
  if((r - i)%2 == 0 && lfound)
    ++cnt;
  }
}
times = 3001;
while(times--)
{
  for(int i = 0; i < n; i++)
  {
    if(s[i] == 'L')
    {
      s[i] = 'x';
      if(i > 0 && s[i-1] != 'x')
        s[i-1] = 'L';
    }
    if(s[i] == 'R')
    {
      s[i] = 'x';
      if(i < n-1 && s[i+1] != 'x')
        s[i+1] = 'R';
    }
  }
}
for(int i = 0;  i < n; i++)
  if(s[i] == '.')
    ++cnt;
cout<<cnt<<endl;

return 0;}