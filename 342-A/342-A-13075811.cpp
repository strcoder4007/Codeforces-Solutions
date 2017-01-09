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

int n;
bool found_two, found_four, doom;
int found[100010];
vector<int>newvec;


int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  int xs; cin>>xs;
  ++found[xs];
}
n /= 3;
if(found[1] != n)
  cout<<-1<<endl;
else if(found[2]+found[3] != found[4]+found[6])
  cout<<-1<<endl;
else
{
  for(int i = 0;  i < n; i++)
  {
    found_two = false;
    found_four = false;
    vector<int>myvec;
    if(found[1])
    {
      --found[1];
      myvec.pb(1);
    }
    if(found[2])
    {
      --found[2];
      myvec.pb(2);
      found_two = true;
    }
    if(found[3] && !found_two)
    {
      --found[3];
      myvec.pb(3);
    }
    if(found[4] && found_two)
    {
      --found[4];
      myvec.pb(4);
      found_four = true;
    }
    if(found[6] && !found_four)
    {
      --found[6];
      myvec.pb(6);
    }
    if(myvec.size() != 3)
    {
      doom = true;
      break;
    }
    else
    {
      for(int xd = 0; xd < 3; xd++)
        newvec.pb(myvec[xd]);
    }
  }
  if(doom)
    cout<<-1<<endl;
  else
  {
    for(int i = 0; i  < newvec.size(); i+=3)
    {
      for(int j = i; j < i+3; j++)
        cout<<newvec[j]<<" ";
      cout<<endl;
    }
  }
}



return 0;}