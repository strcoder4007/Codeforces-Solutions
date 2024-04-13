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

int n, sumx, sumy, sum;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  int x, y; cin>>x>>y;
  sumx += x, sumy += y;
}
if(sumx <= n/2)
  sum+= sumx;
else
  sum+=n-sumx;
if(sumy <= n/2)
  sum+=sumy;
else
  sum+=n-sumy;
cout<<sum<<endl;

return 0;}