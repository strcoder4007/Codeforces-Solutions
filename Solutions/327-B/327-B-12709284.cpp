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

int num;
bool ary[1300010];
vector<int>myvec;

void esieve(int n)
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
      }
    }
  }
    for(int i = 0; i < n; i++)
    {
      if(ary[i] == false)
        myvec.pb(i);
    }
}


int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>num;
  esieve(1300000);
  //cout<<"size = "<<myvec.size()<<endl;
  for(int i = 2; i < num+2; i++)
    cout<<myvec[i]<<" ";
  cout<<endl;

  return 0;
}