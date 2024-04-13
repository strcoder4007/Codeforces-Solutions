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

int ary[4];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

for(int i = 0; i < 4; i++)
  cin>>ary[i];
sort(ary, ary+4);
if (ary[0]+ary[1]>ary[2]||ary[1]+ary[2]>ary[3])
  cout<<"TRIANGLE"<<endl;
else if (ary[0]+ary[1]==ary[2]||ary[1]+ary[2]==ary[3])
  cout<<"SEGMENT"<<endl;
else
  cout<<"IMPOSSIBLE"<<endl;

return 0;}