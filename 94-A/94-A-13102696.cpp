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
vector<unsigned long>myvec, newvec;
unsigned long ary[11];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>s;
for(int i = 0; i < 80; i+=10)
{
  string binary = "";
  for(int j = i; j < i+10; j++)
    binary += s[j];
  myvec.pb(bitset<10>(binary).to_ulong());
}
for(int i = 0; i < 10; i++)
{
  cin>>s;
  newvec.pb(bitset<10>(s).to_ulong());
}

for(int i = 0; i < myvec.size(); i++)
{
  for(int j = 0; j < newvec.size(); j++)
  {
    if(myvec[i] == newvec[j])
      ary[i] = j;
  }
}
for(int i = 0; i < myvec.size() ;i++)
  cout<<ary[i];
cout<<endl;



return 0;}