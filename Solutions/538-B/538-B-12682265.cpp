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
int mx;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>s;
  for(int i = 0; i < s.size(); i++)
    mx = max(mx,s[i]-48);
  cout<<mx<<endl;
  for(int i = 1; i <= mx; i++)// 3
  {
    bool f= false;
    for(int j = 0; j < s.size(); j++)// 2
    {
      if(s[j]-48>=i)
      {
        f = true;
        cout<<1;
      }
      else
      {
        if(f) cout<<0;
      }
    }
    cout<<" ";
  }
  cout<<endl;

  return 0;
}