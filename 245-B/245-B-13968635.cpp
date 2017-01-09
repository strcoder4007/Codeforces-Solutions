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
bool found;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s;
if(s[0] == 'f')
{
  cout<<"ftp://";
  for(int i = 3; i < s.size()-1; i++)
  {
    if(s[i] == 'r' && s[i+1] == 'u' && !found && i != 3)
      {
        if(i == s.size()-2)
          cout<<".ru";
        else
          cout<<".ru/";
        found = true;
        for(int j = i+2; j < s.size(); j++)
          cout<<s[j];
        cout<<endl;
        break;
      }
    else
      cout<<s[i];
  }
}
else
{
  cout<<"http://";
  for(int i = 4; i < s.size()-1; i++)
  {
    if(s[i] == 'r' && s[i+1] == 'u' && !found && i != 4)
      {
        if(i == s.size()-2)
          cout<<".ru";
        else
          cout<<".ru/";
        found = true;
        for(int j = i+2; j < s.size(); j++)
          cout<<s[j];
        cout<<endl;
        break;
      }
    else
      cout<<s[i];
  }
}

return 0;}