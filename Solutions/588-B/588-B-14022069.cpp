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

long long n, calc, x;
vector<long long>myvec;
bool flag;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(long long  i = 1; i*i <= n; i++)
  if(n%i == 0)
    myvec.pb(i), myvec.pb(n/i);
sort(myvec.begin(), myvec.end(), greater<long long>());
for(long long i = 0; i < myvec.size(); i++)
{
  flag = false;
  x = myvec[i];
  for(long long  j = 2; j*j <= n; j++)
  {
    calc = j*j;
    if(x%calc == 0)
    {
      flag = true;
      break;
    }
  }
  if(!flag)
  {
    cout<<myvec[i]<<endl;
    return 0;
  }
}

return 0;}