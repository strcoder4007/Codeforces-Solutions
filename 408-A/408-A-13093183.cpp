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
using namespace std;

int n, minn, sum, k[101];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
minn = 1e9+1;
for(int i = 0; i < n; i++)
  cin>>k[i];
for(int i = 0; i < n; i++)
{
  sum = 0;
  for(int j  =0; j < k[i]; j++)
  {
    int xs;cin>>xs;
    sum += xs*5+15;
  }
  if(minn > sum)
    minn = sum;
}
cout<<minn<<endl;

return 0;}