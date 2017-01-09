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

int n, k, kill, ary[100010];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>k;
kill = n;
for(int i = 1; i <= n; i++)
  cin>>ary[i];
while(ary[kill] == ary[kill-1])
  --kill;
if(kill > k)
  cout<<-1<<endl;
else
  cout<<kill-1<<endl;

return 0;}