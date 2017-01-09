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
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

string s;
int low, high, x, y;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s;
for(int i = 0; i < s.size(); i++)
{
  if(s[i] == 'x')
    ++x;
  else
    ++y;
}
if(x > y)
{
  for(int i = 0;  i < x-y; i++)
    cout<<'x';
  cout<<endl;
}
else
{
  for(int i = 0;  i < y-x; i++)
    cout<<'y';
  cout<<endl;
}

return 0;}