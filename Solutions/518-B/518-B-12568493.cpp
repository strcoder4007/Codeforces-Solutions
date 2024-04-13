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
#include <list>
#include <ctime>
#include <memory.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
typedef long long LL;

using namespace std;

string s, t;
int sary[123], tary[123], len, yay, oops;
int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

cin>>s>>t;
for(int i = 0; i < s.size(); i++)
  ++sary[s[i]];
for(int i = 0; i < t.size(); i++)
  ++tary[t[i]];
for(int i = 65; i < 123; i++)
{
  int minn = min(sary[i], tary[i]);
  yay += minn;
  sary[i] -= minn;
  tary[i] -= minn;
}
for(int i = 65;  i < 91; i++)
{
  int minn = min(sary[i], tary[i+32]);
  oops += minn;
  sary[i] -= minn;
  tary[i+32] -= minn;
}
for(int i = 65;  i < 91; i++)
{
  int minn = min(tary[i], sary[i+32]);
  oops += minn;
  sary[i+32] -= minn;
  tary[i] -= minn;
}
cout<<yay<<" "<<oops<<endl;
  return 0;
}