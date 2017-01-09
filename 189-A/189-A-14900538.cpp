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

int n, a, b, c, sum, ans;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>a>>b>>c;
for(int i = 0; i <= n; i++)
  for(int j = 0; j <= n; j++)
  {
    int left = n-i-j;
    if(left < 0)
      continue;
    if(i%a == 0 && j%b == 0 && left%c == 0)
      sum = i/a+j/b+left/c;
    ans = max(sum, ans);
  }
cout<<ans<<endl;

return 0;}