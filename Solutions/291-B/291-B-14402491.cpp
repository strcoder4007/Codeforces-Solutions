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
vector<int>myvec;
vector<string>newvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

getline(cin, s);
for(int i = 0; i < s.size(); i++)
{
  t = "";
  if(s[i] != ' ' && s[i] != '"')
  {
    while(s[i] != ' ' && i < s.size())
      t+=s[i], ++i;
    newvec.pb(t);
  }
  else if(s[i] == '"')
  {
    ++i;
    while(s[i] != '"')
      t+=s[i], ++i;
    newvec.pb(t);
  }
}
for(int i = 0; i < newvec.size(); i++)
  cout<<"<"<<newvec[i]<<">"<<endl;

return 0;}