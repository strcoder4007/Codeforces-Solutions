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

int k, found[11];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>k; k<<=1;
for(int i = 0 ; i < 4; i++)
{
    string xs; cin>>xs;
    for(int j = 0; j < 4; j++)
    {
      if(xs[j] != '.')
        ++found[xs[j]-48];
    }
}
for(int i = 0; i < 10; i++)
{
  if(found[i] > k)
  {
    cout<<"NO"<<endl;
    return 0;
  }
}
cout<<"YES"<<endl;


return 0;}