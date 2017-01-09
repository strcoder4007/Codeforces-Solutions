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

vector<string>myvec, newvec;
string word, s;
bool inwhile, number;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

getline(cin, s);
if(s.size() == 0)
  s+=" ";
if(s[0] == ',' || s[0] == ';')
  s = " "+s;
if(s[s.size()-1] == ';' || s[s.size()-1] == ',')
  s += " ";
for(int i = 1; i < s.size(); i++)
  if((s[i] == ';' && s[i-1] == ';') || (s[i] == ',' && s[i-1] == ',') || (s[i] == ';' && s[i-1] == ',') || (s[i] == ',' && s[i-1] == ';'))
    s.insert(i, " ");
for(int i = 0; i < s.size(); i++)
{
  word = "";
  inwhile = false;
  while((s[i] != ',' && s[i] != ';') && i < s.size())
  {
    word += s[i];
    ++i;
  }
  number = true;
  for(int ii = 0; ii < word.size(); ii++)
  {
    int a = word[ii];
    if(a > 57 || a < 48)
    {
      newvec.pb(word);
      number = false;
      break;
    }
  }
    if(number)
    {
      if(word[0] == '0' && word.size() > 1)
        newvec.pb(word);
      else
        myvec.pb(word);
    }
}


s = "";
if(myvec.size() == 0)
  cout<<"-"<<endl;
else
{
  cout<<'"';
for(int i = 0; i < myvec.size(); i++)
{
  if(i < myvec.size()-1)
  {
    if(myvec[i] != " ")
      s += myvec[i]+",";
    else
     s+=',';
  }
  else
    s += myvec[i];
}
cout<<s;
cout<<'"'<<endl;
}

s = "";
if(newvec.size() == 0)
  cout<<"-"<<endl;
else
{
  cout<<'"';
for(int i = 0; i < newvec.size(); i++)
{
  if(i < newvec.size()-1)
  {
    if(newvec[i] != " ")
      s += newvec[i]+",";
    else
      s+=',';
  }
  else
  {
  if(newvec[i] != " ")
    s += newvec[i];
  }
}
cout<<s;
cout<<'"'<<endl;
}


return 0;}