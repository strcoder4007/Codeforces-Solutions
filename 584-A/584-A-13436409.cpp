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
using namespace std;

int n, t;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>t;
if(n == 1 && t == 10)
  cout<<-1<<endl;
else if(t != 10)
{
for(int i = 0; i < n; i++)
  cout<<t;
}
else
{
  for(int i = 0; i < n-1; i++)
    cout<<1;
  cout<<0<<endl;
}

return 0;}