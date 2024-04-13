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

int n, m, gsave, ssave;
string ary[1001];
set<int>myset;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
{
  cin>>ary[i];
  for(int j = 0; j < m; j++)
  {
    if(ary[i][j] == 'G')
      gsave = j;
    else if(ary[i][j] == 'S')
      ssave = j;
  }
  if(ssave < gsave)
  {
    cout<<-1<<endl;
    return 0;
  }
  else
    myset.insert(ssave-gsave);
}
cout<<myset.size()<<endl;

return 0;}