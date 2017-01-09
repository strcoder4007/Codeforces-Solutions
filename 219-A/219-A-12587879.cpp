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

int k, sz, ary[1001];
string s;
set<pair<char, int> >myvec;
bool broken;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>k>>s;
  sz = s.size();
  for(int i = 0; i < sz; i++)
    ++ary[s[i]-96];
  for(int i = 0; i < sz; i++)
  {
    if(ary[s[i]-96]%k != 0)
    {
      cout<<-1<<endl;
      return 0;
    }
    else
      myvec.insert(mp(s[i], ary[s[i]-96]/k));
  }
  set<pair<char, int> > ::iterator ii;
  for(int i = 0; i < k; i++)
    for(ii = myvec.begin(); ii != myvec.end(); ii++)
      for(int j = 0; j < ii -> S; j++)
        cout<<ii -> F;
  cout<<endl;
  return 0;
}