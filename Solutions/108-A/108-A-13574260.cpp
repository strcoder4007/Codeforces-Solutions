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


vector<string>myvec;
string s, one, two;
int hour, minute;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s;
for(int i = 0; i < 2; i++)
  one+=s[i], two += s[i+3];
hour = atoi(one.c_str());
minute = atoi(two.c_str());
if(hour == 23 && minute >= 32)
{
  cout<<"00:00"<<endl;
  return 0;
}
  int first = (minute+1)%60;
for(int i = hour;  i <= 23; i++)
{
  string hr;
  stringstream convert;
  convert<<i;
  hr = convert.str();
  if(hr.size() == 1)
    hr = '0'+hr;
  reverse(hr.begin(), hr.end());
  for(int j = first; j <= 59; j++)
  {
    first = 0;
    string min;
    stringstream convert1;
    convert1<<j;
    min = convert1.str();
    if(min.size() == 1)
      min = '0'+min;
    //cout<<hr<<" "<<min<<endl;
    if(hr == min)
    {
      reverse(hr.begin(), hr.end());
      cout<<hr<<":"<<min<<endl;
      return 0;
    }
  }
}


return 0;}