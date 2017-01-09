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

string s;
int k, best;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s>>k;
for(int i = 0; i < s.size(); i++)
{
  best = i;
  for(int j = i+1; j < s.size() && j <= i+k; j++)
    if(s[best] < s[j])
      best = j;
  if(best != i)
    for(int j = best; j > i; j--)
      swap(s[j], s[j-1]), --k;
}
cout<<s<<endl;

return 0;}