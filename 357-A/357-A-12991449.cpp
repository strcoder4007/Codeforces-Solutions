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
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define INT_MAX 1e4+1
typedef long long LL;
using namespace std;

int n, x, y, ans, b, inter;
bool allow, first_time;
int ary[101];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
  cin>>ary[i];
cin>>x>>y;
for(int i = 0; i < n; i++)
{
  if(ans != 0 && allow)
    inter += ary[i];
  if(!first_time)
    b += ary[i];
  if(b >= x && b <= y && !first_time)
    ans = i+2, allow = true, first_time = true;
}
//cout<<ans<<" "<<b<<" "<<inter<<endl;
while(!(b >= x && inter <= y) || n--)
{
  //cout<<ans<<" "<<b<<" "<<inter<<endl;
  if(b >= x && b <= y && inter >= x && inter <= y)
  {
    cout<<ans<<endl;
    return 0;
  }
  else
  {
    b += ary[ans-1], inter -= ary[ans-1];
    ++ans;
  }
}
  cout<<0<<endl;

return 0;}