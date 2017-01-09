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

int x, t, a, b, da, db, div2a[301], div2b[301];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>x>>t>>a>>b>>da>>db;
for(int i = 1; i <= t; i++)
  div2a[i] = a-(i-1)*da, div2b[i] = b-(i-1)*db;
for(int i = 0; i <= t; i++)
  for(int j = 0; j <= t; j++)
    if(div2a[i]+div2b[j] == x)
    {
      cout<<"YES"<<endl;
      return 0;
    }
cout<<"NO"<<endl;

return 0;}