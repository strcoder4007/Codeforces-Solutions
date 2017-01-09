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

int n, m, found[1001];
char init, last;
string s;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 0; i < n; i++)
{
  cin>>s;
  init = s[0];
  for(int j = 0; j < s.size(); j++)
  {
    if(s[j] != init)
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  if(init == last)
  {
    cout<<"NO"<<endl;
    return 0;
  }
  last = init;
}
cout<<"YES"<<endl;

return 0;}