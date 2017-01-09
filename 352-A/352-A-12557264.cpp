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

int n, five, zero;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for(int i = 0; i < n; i++)
  {
    int xs;
    cin>>xs;
    if(xs == 5)
      ++five;
    if(xs == 0)
      ++zero;
  }

  if(zero == 0)
    cout<<-1<<endl;
  else if(five >= 9)
  {
    int limit = five/9*9;
    for(int i = 0; i < limit; i++)
      cout<<5;
    for(int i = 0; i < zero; i++)
      cout<<0;
    cout<<endl;
  }
  else if(five < 9)
    cout<<0<<endl;

  return 0;
}