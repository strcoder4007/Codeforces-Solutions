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
  if(len == 1)
  {
    if(s[0] == '1')
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  else if(len == 2)
  {
    if((s[1] == '4' && s[0] == '1')||(s[0] == '1' && s[1] == '1'))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  else
  {
  for(int k, i = len-1; i >= 0; i-=k)
  {
    if(s[i] == '4' && s[i-1] == '4' && s[i-2] == '1')
      k = 3;
    else if(s[i] == '4' && s[i-1] == '1')
      k = 2;
    else if(s[i] == '1')
      k = 1;
    else
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
}//else
  return 0;
}