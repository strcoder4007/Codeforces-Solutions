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

int k , a , b , v;

int main(){
//freopen("input.txt", "r", stdin);
cin>>k>>a>>b>>v;
int j;
for(j = 1; a > 0; j++)
{
  if(k-1>b)
    a-= (b+1)*v, b=0;
  else
    b-=k, b++, a-= k*v;
}
cout<<j-1<<endl;

return 0;}