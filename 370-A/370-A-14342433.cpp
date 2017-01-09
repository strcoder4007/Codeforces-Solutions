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

int r1, c1, r2, c2;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>r1>>c1>>r2>>c2;
if (r1==r2||c1==c2)cout<<1;
else cout<<2;
cout<<" ";
if (r1+c1==r2+c2||r1-c1==r2-c2)
cout<<1;
else if ((r1+c1)%2==(r2+c2)%2)cout<<2;
else cout<<0;
cout<<" ";
cout<<max(abs(r1-r2),abs(c1-c2))<<endl;

return 0;}