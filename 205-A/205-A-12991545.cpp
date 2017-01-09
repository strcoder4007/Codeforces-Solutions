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

int n;
pair<int, int>ary[100010];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  int xs;  cin>>xs;
  ary[i] = mp(xs, i+1);
}
sort(ary, ary+n);
if(ary[0].F == ary[1].F)
  cout<<"Still Rozdil"<<endl;
else
  cout<<ary[0].S<<endl;

return 0;}