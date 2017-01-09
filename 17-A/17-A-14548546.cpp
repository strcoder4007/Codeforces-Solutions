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

int ary[2010], n, k, cnt;
vector<int>myvec;

void esieve(int n)
{
    for(int i = 2; i <= n; i++)
    {
      if(ary[i] == false)
      {
        int ii = 2;
        while(i*ii <= n)
        {
            ary[i*ii] = true;
            ++ii;
        }
        }
    }//for
    for(int i = 2; i <= (n/2); i++)
    {
      if(ary[i] == false)
        myvec.pb(i);
    }
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
esieve(2*n);
for(int i = 1; i < myvec.size(); i++)
    if(!ary[myvec[i]+myvec[i-1]+1] && myvec[i]+myvec[i-1]+1 <= n)
      ++cnt;
if(cnt >= k)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;

return 0;}