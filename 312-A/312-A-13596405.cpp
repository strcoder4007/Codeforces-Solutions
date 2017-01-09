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
bool first, second;
int sz, n;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
getline(cin, s);
for(int i = 0; i < n; i++)
{
  first = false, second = false;
  getline(cin, s);
  sz = s.size();
  if(s[0] == 'm' && s[1] == 'i' && s[2] == 'a' && s[3] == 'o' && s[4] == '.')
    first = true;
  if(s[sz-1] == '.' && s[sz-2] == 'a' && s[sz-3] == 'l' && s[sz-4] == 'a' && s[sz-5] == 'l')
    second = true;
  if((first && second) || (!first && !second))
    cout<<"OMG>.< I don't know!"<<endl;
  else if(first)
    cout<<"Rainbow's"<<endl;
  else if(second)
    cout<<"Freda's"<<endl;
}

return 0;}