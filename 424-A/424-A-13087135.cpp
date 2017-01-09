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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
using namespace std;

int n, sitting, standing, change;
string s;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>s;
for(int i = 0; i < n; i++)
{
  if(s[i] == 'x')
    ++sitting;
  else
    ++standing;
}
n >>= 1;
if(sitting > n)
  change = sitting-n;
else if(sitting < n)
  change = n - sitting;
else
  {
    cout<<0<<endl<<s<<endl;
    return 0;
  }
cout<<change<<endl;
if(sitting > n)
{
  for(int i = 0; i < 2*n, change > 0; i++)
    if(s[i] == 'x')
      s[i] = 'X', --change;
}
else
{
  for(int i = 0; i < 2*n, change > 0; i++)
    if(s[i] == 'X')
      s[i] = 'x', --change;
}
cout<<s<<endl;


return 0;}