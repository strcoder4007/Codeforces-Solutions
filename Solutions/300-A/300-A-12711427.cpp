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
#define endl "\n"
typedef long long LL;

using namespace std;

int n, buff, cnt;
vector<int> vec1, vec2, vec3;
bool notfull;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 0; i < n; i++)
  {
    int xs;  cin>>xs;
    if(!notfull && xs < 0)
    {
      vec1.pb(xs);
      notfull = true;
    }
    else if(xs == 0)
      vec3.pb(xs);
    else
      vec2.pb(xs);
  }
  cout<<vec1.size()<<" ";
  for(int i = 0; i < vec1.size(); i++)
    cout<<vec1[i]<<" ";
  cout<<endl;

  for(int i = 0; i < vec2.size(); i++)
  {
    if(vec2[i] < 0)
    {
      buff = i;
      ++cnt;
    }
  }
  if(cnt&1)
  {
    vec3.pb(vec2[buff]);
    vec2.erase(vec2.begin()+buff);
  }

  cout<<vec2.size()<<" ";
  for(int i = 0; i < vec2.size(); i++)
    cout<<vec2[i]<<" ";
  cout<<endl;
  cout<<vec3.size()<<" ";
  for(int i = 0; i < vec3.size(); i++)
    cout<<vec3[i]<<" ";
  cout<<endl;

  return 0;
}