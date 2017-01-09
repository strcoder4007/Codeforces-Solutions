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

int a, b, n, ary[100010], xs;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b>>n;
xs = a%b;
for(int i = 0; i < n; i++)
{
  ary[i] = -1;
  for(int j = 0; j <= 9; j++)
  {
    if((xs*10+j)%b == 0)
    {
      ary[i] = j;
      xs = (xs*10+j)%b;
      break;
    }
  }
  if(ary[i] == -1)
  {
    cout<<-1<<endl;
    return 0;
  }
}
cout<<a;
for(int i = 0; i < n; i++)
  cout<<ary[i];
cout<<endl;

return 0;}