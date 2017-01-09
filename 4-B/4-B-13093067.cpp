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

int d, sum, sumtime, found[31], maxsum;
pair<int, int>ary[31];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>d>>sumtime;
for(int i = 0; i < d; i++)
{
  int l, r; cin>>l>>r;
  ary[i] = mp(l, r);
  sum+=l;
  found[i] = l;
  maxsum += r;
}
if(sum > sumtime)
{
  cout<<"NO"<<endl;
  return 0;
}
while(sum < sumtime)
{
  for(int i = 0; i < d; i++)
  {
    if(found[i]+1 <= ary[i].S)
      ++sum, ++found[i];
    if(sum == sumtime)
      break;
  }
  if(sum == sumtime)
    break;
  if(sum == maxsum)
    break;
}
if(sum == sumtime)
{
  cout<<"YES"<<endl;
  for(int i = 0; i < d; i++)
    cout<<found[i]<<" ";
  cout<<endl;
}
else
  cout<<"NO"<<endl;

return 0;}