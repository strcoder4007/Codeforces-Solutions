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
#define MOD 1000000007
#define LL long long
using namespace std;

int x, y, calc;
double calc1, calc2;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>x>>y;
cout<<fixed;
if(x == y)
  cout<<x<<endl;
else if(x < y)
  cout<<-1<<endl;
else
{
  calc = (x+y)/y;
  if(calc&1)
    --calc;
  calc1 = (x+y)/double(calc);
  calc = (x-y)/y;
  if(calc&1)
    --calc;
    calc2 = (x-y)/double(calc);
  cout<<setprecision(12)<<min(calc1, calc2)<<endl;
}

return 0;}