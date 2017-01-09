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
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

float p, q;
int a, b, c, d;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cout<<fixed;
cin>>a>>b>>c>>d;
p = a/float(b);
q = (1-c/float(d))*(1-a/float(b));
cout<<setprecision(8)<<p/(1-q)<<endl;


return 0;}