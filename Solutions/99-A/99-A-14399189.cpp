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

string s;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s;
for(int i = 0; i < s.size(); i++)
{
  if(s[i] == '.' && s[i-1] == '9')
  {
    cout<<"GOTO Vasilisa."<<endl;
    return 0;
  }
  if(s[i] == '.' && s[i+1] >= '5')
    ++s[i-1];
}
for(int i = 0; i < s.size(); i++)
{
  if(s[i] == '.')
    return 0;
  cout<<s[i];
}

return 0;}