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

string x, y, z;
vector<int> myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

string ary[24] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
cin>>x>>y>>z;
for(int i = 0; i < 24; i++)
  if(ary[i] == x || ary[i] == y || ary[i] == z)
    myvec.pb(i+1);
/*
for(int i = 0; i < myvec.size(); i++)
  cout<<myvec[i]<<" ";
cout<<endl;
*/
for(int i = 0; i < 4; i++)
{
  if(myvec[i+1]-myvec[i] == 3 && myvec[i+2]-myvec[i] == 7)
    {
      cout<<"minor"<<endl;
      return 0;
    }
  else if(myvec[i+1]- myvec[i] == 4 && myvec[i+2]-myvec[i] == 7)
    {
      cout<<"major"<<endl;
      return 0;
    }
}
cout<<"strange"<<endl;

return 0;}