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

int x, y, z, a, b, c, fst, sec, found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>x>>y>>z;
for(int i = 0; i <= 1000000; i++)
{
  fst = x-i;
  sec = y-i;
  if(fst < 0 || sec < 0)
    continue;
  if(fst+sec == z)
    a = i, b = fst, c = sec, found = 1;
}
if(found)
  cout<<a<<" "<<c<<" "<<b<<endl;
else
  cout<<"Impossible"<<endl;

return 0;}