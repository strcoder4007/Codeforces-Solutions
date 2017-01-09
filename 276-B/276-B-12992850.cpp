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
typedef long long LL;
using namespace std;

string s;
int found[27], sum;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>s;
for(int i = 0; i < s.size(); i++)
  ++found[s[i]-96];
for(int i = 0; i < 27; i++)
  if(found[i]&1)
    ++sum;
if(sum&1 || sum == 0)
  cout<<"First"<<endl;
else
  cout<<"Second"<<endl;

return 0;}