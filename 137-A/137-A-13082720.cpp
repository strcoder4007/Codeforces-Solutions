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
#define pow_seven 10000000
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
using namespace std;

int cnt, found, last_index;
string s;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>s;
char init = s[0];
found = 1;
for(int i = 1; i < s.size(); i++)
{
  if(init != s[i] || found == 5)
  {
    ++cnt;
    init = s[i];
    last_index = i;
    found = 1;
  }
  else
  {
    //cout<<"i = "<<i<<" init = "<<init<<endl;
    ++found;
  }
}

cout<<cnt+1<<endl;


return 0;}