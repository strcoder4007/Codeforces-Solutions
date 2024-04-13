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
int k, num;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>s>>k;
  num = s.size()/k;
  if(s.size()%k != 0)
  {
    cout<<"NO"<<endl;
    return 0;
  }
  int sz = s.size();
  for(int i = 0; i < sz; i+=num)
  {
    for(int j = i, k = i+num-1; j < k; j++, k--)
    {
      if(s[j] != s[k])
      {
        cout<<"NO"<<endl;
        return 0;
      }
    }
  }
  cout<<"YES"<<endl;

  return 0;
}