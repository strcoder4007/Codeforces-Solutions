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

int n, skip, init;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
skip = 1;
init = 1;
for(int i = 1; i < n; i++)
{
  if((init+skip)%n == 0)
    cout<<n<<" ";
  else
    cout<<(init+skip)%n<<" ";
  init += skip;
  ++skip;
}
cout<<endl;

return 0;}