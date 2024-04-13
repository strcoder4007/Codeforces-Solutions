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
#define MP make_pair
#define PB push_back
#define PI 3.141592653589793
typedef unsigned long long LL;

using namespace std;

string s;
int len, lower, upper;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>s;

  len = s.size();
  for (int i = 0; i < len; i++)
  {
    if(isupper(s[i]))
      ++upper;
    else
      ++lower;
  }
  if(upper <= lower)
    for (int i = 0; i < len; i++)
      s[i] = tolower(s[i]);
  else
    for (int i = 0; i < len; i++)
      s[i] = toupper(s[i]);


  for (int i = 0; i < len; i++)
    cout<<s[i];
  cout<<endl;


  return 0;
}