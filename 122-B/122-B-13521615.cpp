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
int four, seven;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s;
for(int i = 0; i < s.size(); i++)
{
  if(s[i] == '4')
    ++four;
  if(s[i] == '7')
    ++seven;
  }
if(four == seven && four == 0)
  cout<<-1<<endl;
else if(four >= seven)
  cout<<4<<endl;
else
  cout<<7<<endl;


return 0;}