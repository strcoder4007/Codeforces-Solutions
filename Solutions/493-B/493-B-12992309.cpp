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
#include <iomanip>
#include <list>
#include <ctime>
#include <memory.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define INT_MAX 1e4+1
typedef long long LL;
using namespace std;

long long n,q,s1,s2;
vector<long long> v1,v2;
long long lst;

bool cmp(vector<long long> v1,vector<long long> v2)
{
 for (int i=0;i<v1.size();i++)
 {
  if (i==v2.size())return true;
  if (v1[i]>v2[i])return true;
  if (v1[i]<v2[i])return false;
 }
 return false;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
//cin.tie(0);

cin>>n;
for (;n;--n)
{
 cin>>q;
 if (q<0)v2.push_back(-q);
 else v1.push_back(q);
 if (q<0)lst=2;
 else lst=1;
}

s1=s2=0;
for (int i=0;i<v1.size();i++)
 s1+=v1[i];
for (int i=0;i<v2.size();i++)
 s2+=v2[i];
if (s1>s2)
 cout<<"first"<<endl;
 else if (s1<s2)
 cout<<"second"<<endl;
 else if (cmp(v1,v2)==1)
  cout<<"first"<<endl;
  else if (cmp(v2,v1)==1)
   cout<<"second"<<endl;
  else if (lst==1)
   cout<<"first"<<endl;
   else cout<<"second"<<endl;

return 0;}