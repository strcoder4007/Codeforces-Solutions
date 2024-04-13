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

int n, ary[101];
double red, blue;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
  cin>>ary[i];
sort(ary, ary+n);
for(int i = 0; i < n; i+=2)
  red+=pi*ary[i]*ary[i];
for(int i = 1; i < n; i+=2)
  blue += pi*ary[i]*ary[i];
cout<<fixed<<setprecision(10)<<abs(red-blue)<<endl;

return 0;}