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

int n, init, pos, ary[100010], newary[100010], cnt;
bool found;
vector<int>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
  cin>>ary[i], newary[i] = ary[i];

sort(newary, newary+n);
for(int i = 0; i < n; i++)
  if(newary[i] != ary[i])
    ++cnt, myvec.pb(i);
if(cnt == 2 || cnt == 0)
{
  if(cnt == 2)
    swap(ary[myvec[0]], ary[myvec[1]]);
  for(int i = 0; i < n; i++)
  {
    if(newary[i] != ary[i])
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}
cout<<"NO"<<endl;


return 0;}