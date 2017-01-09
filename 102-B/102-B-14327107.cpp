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

string s, t, newstr;
int sum, sz, cnt;

string inttostr(int Number)
{
  string Result;
  stringstream convert;
  convert << Number;
  Result = convert.str();
  return Result;
}

int main(){
  //freopen("input.txt","r",stdin);
  ios_base::sync_with_stdio(0);

  cin>>s;
  sz = s.size();
  if(sz == 1)
  {
    cout<<0<<endl;
    return 0;
  }
  for(int i = 0; i < sz; i++)
    sum += s[i]-48;
  newstr = inttostr(sum);
  ++cnt;
  while(newstr.size() != 1)
  {
    sum = 0;
    sz = newstr.size();
    for(int i = 0; i < sz; i++)
      sum += newstr[i]-48;
    ++cnt;
    newstr = inttostr(sum);
  }
  cout<<cnt<<endl;


return 0;}