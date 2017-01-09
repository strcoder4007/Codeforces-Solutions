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

int d1, d2, d3;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>d1>>d2>>d3;
int a = d1+min(d1+d2, d3) + min(d2, d1+d3);
int b = d2+min(d1+d2, d3) + min(d1, d2+d3);
cout<<min(a, b)<<endl;

return 0;}