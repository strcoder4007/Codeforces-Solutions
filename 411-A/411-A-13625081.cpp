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
bool small, big, digit;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>s;
for(int i = 0; i < s.size(); i++)
{
  if(s[i] <= 123 && s[i] >= 97)
    small = true;
  if(s[i] <= 91 && s[i] >= 65)
    big = true;
  if(s[i] <= 58 && s[i] >= 48)
    digit = true;
}
if(small && big && digit && s.size() >= 5)
  cout<<"Correct"<<endl;
else
  cout<<"Too weak"<<endl;

return 0;}