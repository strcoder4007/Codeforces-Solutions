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

long long n, m, bt, temp;
vector<long long>myvec;
vector<vector<long long > >ans;

long long  solve(vector<long long>newvec)
{
  long long res;
  for(int i = 0; i < n; i++)
  {
    long long minn = newvec[i];
    for(int j = i; j < n; j++)
      minn = min(minn, newvec[j]), res += minn;
  }
  return res;
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
  myvec.pb(i);
do
{
  temp = solve(myvec);
  if(temp > bt)
  {
    ans.clear();
    ans.pb(myvec);
    bt = temp;
  }
  else if(temp == bt)
    ans.pb(myvec);
} while(next_permutation(myvec.begin(), myvec.end()));

int xs = m-1;
for(int i = 0; i < n; i++)
  cout<<ans[xs][i]<<" ";
cout<<endl;

return 0;}