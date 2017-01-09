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
#define INT_MAX 1e4+1
typedef long long LL;
using namespace std;

int n, ary[1001];
vector<int> myvec;


void add(int x)
{
    int prod=1;
    while (true)
    {
        prod*=x;
        if (prod<=n)
            myvec.pb(prod);
        else
            break;
    }
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
int xs = 2;
while(xs <= n)
{
  myvec.pb(xs);
  xs <<= 1;
}
for(int i = 3; i <= n; i+=2)
{
  if(ary[i] == 0)
  {
    add(i);
    for(int j = i*2; j <= n; j+=i)
      ary[j] = 1;
  }
}
cout<<myvec.size()<<endl;
for(int i = 0; i < myvec.size(); i++)
  cout<<myvec[i]<<" ";
cout<<endl;

return 0;}