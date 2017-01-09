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
using namespace std;

string s;
int sz;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>s;
sz = s.size();
for(int i = 0; i < sz; i++)
  if(s[i] == 'r')
    cout<<i+1<<endl;
for(int i = sz-1; i >= 0; i--)
  if(s[i] == 'l')
    cout<<i+1<<endl;

return 0;}