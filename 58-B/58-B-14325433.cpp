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

int n, found[1000010];
vector<int>myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 2; i <= n; i++)
  if(n%i == 0)
    myvec.pb(i);
sort(myvec.begin(), myvec.end(), greater<int>());
for(int i = 0; i < myvec.size(); i++)
  if(found[i] == 0)
    for(int j = i+1; j < myvec.size(); j++)
      if(myvec[i]%myvec[j] != 0 && myvec[i] > myvec[j])
        found[j] = 1;
for(int i = 0; i < myvec.size(); i++)
  if(found[i] == 0)
    cout<<myvec[i]<<" ";
cout<<1<<endl;

return 0;}