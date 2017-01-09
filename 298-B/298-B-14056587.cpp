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

int t, x, x2, y2, y, diffy, diffx;
string s;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>t>>x>>y>>x2>>y2>>s;
for(int i = 0; i < s.size(); i++)
{
  diffy = abs(y2-y);
  diffx = abs(x2-x);
  if(s[i] == 'S' && abs(y-1-y2) < diffy)
    --y;
  if(s[i] == 'N' && abs(y+1-y2) < diffy)
    ++y;
  if(s[i] == 'E'  && abs(x+1-x2) < diffx)
    ++x;
  if(s[i] == 'W' && abs(x-1-x2) < diffx)
    --x;
  if(x == x2 && y == y2)
  {
    cout<<i+1<<endl;
    return 0;
  }
}
cout<<-1<<endl;

return 0;}