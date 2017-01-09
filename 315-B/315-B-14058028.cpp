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

long long sum;
int n, m, v, x, ary[100010], add, t;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
  cin>>ary[i];
while(m--)
{
  cin>>t;
  if(t == 1)
  {
    cin>>v>>x;
    ary[v] = x-sum;
  }
  if(t == 2)
  {
    cin>>add;
    sum += add;
  }
  if(t == 3)
  {
    cin>>v;
    cout<<ary[v]+sum<<endl;
  }
}

return 0;}