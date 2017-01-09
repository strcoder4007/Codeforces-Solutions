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

int n, smaller;
string s;
vector<char>vec1, vec2;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>s;
  for(int i = 0; i < n; i++)
  {
    vec1.pb(s[i]);
    vec2.pb(s[i+n]);
  }
  sort(vec1.begin(), vec1.end());
  sort(vec2.begin(), vec2.end());
  if(vec1[0] == vec2[0])
  {
    for(int i = 0; i < n; i++)
    {
      if(vec1[i] != vec2[i])
      {
        if(vec1[i] < vec2[i])
          smaller = 1;
        else
          smaller = -1;
        break;
      }
    }
  }
  else if(vec1[0] < vec2[0])
    smaller = 1;
  else
    smaller = -1;
    
    
  if(smaller == 0)
  {
    cout<<"NO"<<endl;
    return 0;
  }
  else if(smaller == 1)
  {
    for(int i = 0; i < n; i++)
    {
      if(vec1[i] >= vec2[i])
      {
        cout<<"NO"<<endl;
        return 0;
      }
    }
  }
  else
  {
    for(int i = 0; i < n; i++)
    {
      if(vec1[i] <= vec2[i])
      {
        cout<<"NO"<<endl;
        return 0;
      }
    }
  }
  cout<<"YES"<<endl;

  return 0;
}