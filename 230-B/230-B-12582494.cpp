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

LL q;
set<LL> myset;
int ary[1000010];


void esieve(LL n)
{
    for(int i = 2; i < n; i++)
    {
      if(ary[i] == false)
      {
      int ii = 2;
      while(i*ii <= n)
      {
        ary[i*ii] = true;
        ++ii;
      }//while statement
    }//if statement
    }
    for(int i = 0; i < n; i++)
    {
      if(ary[i] == false)
        myset.insert(LL(i)*i);
    }
}


int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  esieve(1000010);
  int n;
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    cin>>q;
    if(q == 1 || q == 2 || q == 3)
      cout<<"NO"<<endl;
    else
    {
    if(myset.find(q) != myset.end())
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
    }
  }
  return 0;
}