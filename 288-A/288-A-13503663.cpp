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

int n, k;
string s, str;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
if(k > n || (n>k && k == 1))
{
  cout<<-1<<endl;
  return 0;
}

char init = 'a';
for(int i = 0; i < k; i++)
  s+=init, ++init;
init = 'a';
for(int i = 0; i < (n-k); i++)
{
  str += init;
  if(init == 'a')
    init = 'b';
  else
    init = 'a';
}
if(k == 1)
  s.insert(1, str);
else
  s.insert(2, str);
cout<<s<<endl;


return 0;}