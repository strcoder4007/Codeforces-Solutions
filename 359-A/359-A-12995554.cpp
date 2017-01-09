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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;
using namespace std;

int n, m;
bool present;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>m;
for(int i = 0; i < n; i++)
{
  for(int j = 0; j < m; j++)
  {
    int xs; cin>>xs;
    if(xs == 1 && ((i == 0 || i == n-1 || j == 0 || j == m-1)))
      present = true;
  }
}
if(present)
  cout<<2<<endl;
else
  cout<<4<<endl;

return 0;}