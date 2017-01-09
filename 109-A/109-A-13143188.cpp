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
using namespace std;

int n, m;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < 7; i++)
{
  m = n - 4*i;
  if(m >= 0 && m%7 == 0)
  {
    string ans;
    for(int j = 0; j < i; j++)
      ans+='4';
    for(int j = 0; j < m/7; j++)
      ans += '7';
    cout<<ans<<endl;
    return 0;
  }
}
cout<<-1<<endl;

return 0;}