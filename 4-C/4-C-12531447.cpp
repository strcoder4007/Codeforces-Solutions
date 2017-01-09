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
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
typedef unsigned long long LL;

using namespace std;

int n;
string S, s;
map<string,int>mi;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    cin>>s;
    S = s;
    if (mi.find(S) == mi.end())
    {
      mi[S] = 1;
      cout<<"OK"<<endl;
    }
    else
    cout<<s<<mi[S]++<<endl;
  }
}