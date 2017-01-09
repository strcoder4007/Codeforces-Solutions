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

string s;
int len;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>s;
  len = s.size();
  for(int i = 0; i < len; i++)
  {
    if(s[i] == '0')
    {
     s.erase(s.begin()+i);
     cout<<s<<endl;
     return 0;
   }
  }
  s.erase(s.begin()+1);
  cout<<s<<endl;
  return 0;
}