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
long long sum1, sum2;
bool found;
int pivot;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>s;
for(int i = 0; i < s.size(); i++)
  if(s[i] == '^')
    pivot = i;
for(int i = 0; i < s.size(); i++)
{
  if(s[i] == '^')
    found = true;
  if(!found && s[i] >= 48 && s[i] <= 57)
    sum1 += (s[i]-48)*(pivot-i);
  if(found && s[i] >= 48 && s[i] <= 57)
    sum2 += (s[i]-48)*(i-pivot);
}
if(sum1 > sum2)
  cout<<"left"<<endl;
else if(sum1 < sum2)
  cout<<"right"<<endl;
else
  cout<<"balance"<<endl;

return 0;}