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

int found[1000010], a, b, c;
long long ans;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

for(int num = 1; num <= 1000000; num++)
  for(int i = num; i <= 1000000; i+= num)
    found[i]++;
cin>>a>>b>>c;
for(int i = 1; i <= a; i++)
  for(int j = 1; j <= b; j++)
    for(int k = 1; k <= c; k++)
      ans = (ans+found[i*j*k])%(1<<30);
cout<<ans<<endl;

return 0;}