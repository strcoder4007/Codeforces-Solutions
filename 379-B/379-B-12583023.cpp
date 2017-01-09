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

int n;
long ar[2000];

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
for (int i=1;i<=n;i++)
cin>>ar[i];
for (int i=1;i<n;i++)
{
    for (int j=1;j<=ar[i];j++)
    cout<<"PRL";
    cout<<"R";
}
for (int i=1;i<=ar[n];i++)
cout<<"PLR";
cout<<endl;


  return 0;
}