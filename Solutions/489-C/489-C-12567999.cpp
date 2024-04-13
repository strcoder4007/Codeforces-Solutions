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

int m, s;
string s1, s2;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>m>>s;
  if(m==1 && s==0)
  {
    cout<<"0 0"<<endl;
    return 0;
  }
  if(s<1 || s>m*9)
  {
    cout<<"-1 -1"<<endl;
    return 0;
  }
  for(int i = 0; i < m; ++i)
  {
    int x = min(9, s);
    s -= x;
    s2 += char(x+'0');
  }
  s1 = s2;
  reverse(s1.begin(), s1.end());
  if(s1[0] == '0')
  {
    for(int i = 0; i < m; ++i)
      if(s1[i] > '0')
      {
        ++s1[0];
        --s1[i];
        break;
      }
  }
  cout<<s1<<' '<<s2<<endl;
  return 0;
}