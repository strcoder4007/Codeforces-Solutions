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

string s, t;
int have[30], need[30], sum;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>s>>t;
for(int i = 0; i < s.size(); i++)
  ++have[s[i]-96];
for(int i = 0; i < t.size(); i++)
  ++need[t[i]-96];
for(int i = 0; i <= 27; i++)
{
  if(have[i] == 0 && need[i] != 0)
  {
    cout<<-1<<endl;
    return 0;
  }
  sum += min(have[i], need[i]);
}
cout<<sum<<endl;

return 0;}