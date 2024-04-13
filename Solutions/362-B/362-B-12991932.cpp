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

int n, m, ary[3001];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n>>m;
for(int i = 0; i < m; i++)
  cin>>ary[i];
sort(ary, ary+m);
if(ary[0] == 1 || ary[m-1] == n)
{
  cout<<"NO"<<endl;
  return 0;
}
for(int i = 0; i < m-2; i++)
{
  if((ary[i+2]-ary[i]) == 2)
  {
    cout<<"NO"<<endl;
    return 0;
  }
}
cout<<"YES"<<endl;

return 0;}