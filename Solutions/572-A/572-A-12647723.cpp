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

int n1, n2, k, m;
int ary1[100010], ary2[100010];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n1>>n2;
  cin>>k>>m;
  for(int i = 1; i <= n1; i++)
    cin>>ary1[i];
  for(int i = 1; i <= n2; i++)
    cin>>ary2[i];
  if(ary1[k] < ary2[n2-m+1])
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

  return 0;
}