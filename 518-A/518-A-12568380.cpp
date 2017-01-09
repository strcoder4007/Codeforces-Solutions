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

string st1, st2;
int q;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

cin>>st1;
cin>>st2;
q = st1.size()-1;
while(st1[q]=='z')
{
  st1[q]='a';
  --q;
}
++st1[q];
if (st1==st2)
 cout<<"No such string"<<endl;
else
 cout<<st1<<endl;
  return 0;
}