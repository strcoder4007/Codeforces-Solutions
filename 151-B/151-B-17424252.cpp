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
#include <bitset>
#include <climits>

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;


long sz[1000];
string st;
string nm[1000];
long n1[1000],n2[1000],n3[1000];
long tests;
long bn1,bn2,bn3;
vector<string> v1,v2,v3;

string parse(string st)
{
 string st1;
 for (int i=0;i<st.size();i++)
 if (st[i]>='0'&&st[i]<='9')st1+=st[i];
 return st1;
}

bool issame(string st)
{
     for (int i=0;i<st.size();i++)
     if (st[i]!=st[0])return false;
     return true;
}

bool isdown(string st)
{
 for (int i=1;i<st.size();i++)
 if (st[i]>=st[i-1])return false;
 return true;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);


cin>>tests;
for (int test=1;test<=tests;++test)
{
 cin>>sz[test]>>nm[test];
 for (int i=1;i<=sz[test];i++)
 {
     cin>>st;
     st=parse(st);
     if (issame(st))n1[test]++;
     else if (isdown(st))n2[test]++;
     else n3[test]++;
 }
}

for (int i=1;i<=tests;i++)
{
 if (n1[i]>bn1)bn1=n1[i];
 if (n2[i]>bn2)bn2=n2[i];
 if (n3[i]>bn3)bn3=n3[i];
}

for (int i=1;i<=tests;i++)
{
    if (n1[i]==bn1)v1.push_back(nm[i]);
    if (n2[i]==bn2)v2.push_back(nm[i]);
    if (n3[i]==bn3)v3.push_back(nm[i]);
}
cout<<"If you want to call a taxi, you should call:";
for (int i=0;i<v1.size();i++)
{
    if (i)cout<<",";
    cout<<" ";
    cout<<v1[i];
}
cout<<"."<<endl;

cout<<"If you want to order a pizza, you should call:";
for (int i=0;i<v2.size();i++)
{
    if (i)cout<<",";
    cout<<" ";
    cout<<v2[i];
}
cout<<"."<<endl;

cout<<"If you want to go to a cafe with a wonderful girl, you should call:";
for (int i=0;i<v3.size();i++)
{
    if (i)cout<<",";
    cout<<" ";
    cout<<v3[i];
}
cout<<"."<<endl;

return 0;}