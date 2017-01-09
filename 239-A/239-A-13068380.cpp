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
#define pow_seven 10000000
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;
using namespace std;

long y,k,n;
vector<long> ans;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>y>>k>>n;
for (int i=k;i<=n;i+=k)
{
    if (i>y)
      ans.push_back(i-y);
}
if (ans.size()==0)
  cout<<-1<<endl;
else
  for(int i=0;i<ans.size();i++)
  {
    if (i)
      cout<<" ";
    cout<<ans[i];
  }

return 0;}