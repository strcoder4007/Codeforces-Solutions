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
using namespace std;

int n;
vector<string> child, rat, man;
string captain;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 0; i < n; i++)
{
  string s, t;  cin>>s>>t;
  if(t[0] == 'c' && t[1] == 'a')
    captain  = s;
  else if((t[0] == 'c' && t[1] == 'h')|| t[0] == 'w')
    child.pb(s);
  else if(t[0] == 'm')
    man.pb(s);
  else
    rat.pb(s);
}
for(int i = 0; i < rat.size(); i++)
  cout<<rat[i]<<endl;
for(int i = 0; i < child.size(); i++)
    cout<<child[i]<<endl;
for(int i = 0; i < man.size(); i++)
      cout<<man[i]<<endl;
cout<<captain<<endl;

return 0;}